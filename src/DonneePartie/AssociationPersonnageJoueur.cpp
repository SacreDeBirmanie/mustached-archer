AssociationPersonnageJoueur::AssociationPersonnageJoueur() {


	ordreTour_ = new Chaine<Joueur*>();
	joueurCourant_ = NULL;
}

bool AssociationPersonnageJoueur::nouveauJoueur(Joueur *joueur){
		if(this->listeJoueurs_.find(joueur->getPseudo())!= listeJoueurs_.end()){
			return false;
		}
		else{
			this->listeJoueurs_[joueur->getPseudo()] = joueur;
			placementJoueur_.push_back(joueur);
			return true;
		return true;		
}
bool AssociationPersonnageJoueur::nouveauPersonnage(Personnage *personnage){
	if(this->listePersonnages_.find(personnage->getOrdre())!=listePersonnages_.end()){
		return false;
	}
	else{
		this->listePersonnages_[personnage->getOrdre()] = personnage;
		return true;
	}
		return true;
}

int AssociationPersonnageJoueur::nbJoueurs(){
	return this->listeJoueurs_.size();
}

int AssociationPersonnageJoueur::nbPersonnages(){
	return this->listePersonnages_.size();
}

void AssociationPersonnageJoueur::associer(Personnage *p, Joueur *j){
	this->assocJP_[j->getPseudo()] = p->getOrdre();
	this->assocPJ_[p->getOrdre()] = j->getPseudo();
	j->setComportement(p);

}

void AssociationPersonnageJoueur::associer(Joueur *j, Personnage *p){
	this->assocPJ_[p->getOrdre()] =j->getPseudo();
	this->assocJP_[j->getPseudo()] = p->getOrdre();
	j->setComportement(p);
}

void AssociationPersonnageJoueur::reinitialiser(){
	for (map<string, Joueur*>::iterator iter = listeJoueurs_.begin(); iter != listeJoueurs_.end(); iter++ ){
		assocJP_[iter->first] = NULL;
	}

	for ( map<int,Personnage*>::iterator iter = listePersonnages_.begin(); iter != listePersonnages_.end(); iter++ ){
		assocPJ_[iter->first] = NULL;
	}

	selection_ = false;

}

Joueur* AssociationPersonnageJoueur::retrouverJ(Personnage *p){
	return *this->assocPJ_[p->getOrdre()];
}
Personnage* AssociationPersonnageJoueur::retrouverP(Joueur *j){
	return listePersonnages_[assocJP_[j->getPseudo()]];
}

vector<Personnage*> AssociationPersonnageJoueur::persosDisponible(){
	vector<Personnage*> tmp;

	for ( map<int,string>::iterator iter = assocPJ_.begin(); iter != assocPJ_.end(); iter++ ){
		if(iter->second ==NULL)
			tmp.push_back(listePersonnages_[iter->first]);
	}
	return tmp;


}

Joueur* AssociationPersonnageJoueur::joueurSuivantTour(){
	if(joueurCourant_->suivant != NULL){
		Maillon<Joueur*> * tmp = joueurCourant_;
		joueurCourant_ = joueurCourant_->suivant;
		return tmp->element;
	}
	else
		return NULL;

}


void AssociationPersonnageJoueur::deplacerCurseurChoixPerso(bool init=false){
	if(init==false)
			choixCourant_ = (choixCourant_ +1) % placementJoueur_.size();
	else{
		selection_ = true;
		choixCourant_ = couronnement_;
	}
}

Joueur* AssociationPersonnageJoueur::joueurSuivantChoixPersonnages(){
	if(placementJoueur_.at(choixCourant_).getPseudo() != couronnement_ && selection_ == true){
		this->deplacerCurseurChoixPerso();
		return placementJoueur_.at(choixCourant_);
	}
	else if(placementJoueur_.at(choixCourant_).getPseudo() == couronnement_ && selection_ == false){
		this->deplacerCurseurChoixPerso(true);
		return placementJoueur_.at(choixCourant);
	}
	else
		return NULL;
}

Joueur* AssociationPersonnageJoueur::joueurSuivantDecomptePoints(){

}

void AssociationPersonnageJoueur::couronnement(Joueur* j){
	for(int i=0; i<placementJoueur_.size();++i){
		if((j->getPseudo()).compare((placementJoueur_.at(i))->getPseudo())){
			couronnement_ = i;
			break;
		}
	}
}

void AssociationPersonnageJoueur::modifierOrdreJoueur(Joueur * j){
	ordreTour_->retirerElement(j);
	ordreTour_->insererQueue(j);
}

void AssociationPersonnageJoueur::modifierOrdreJoueur(Joueur *j, Joueur *jj){
	ordreTour_->retirerElement(j);
	ordreTour_->insererApres(j,jj);

}


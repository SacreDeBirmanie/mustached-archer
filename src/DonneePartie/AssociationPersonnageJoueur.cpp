AssociationPersonnageJoueur::AssociationPersonnageJoueur() {
	Joueur * j = NULL;

	Chaine<Joueur*> ordreTour = new Chaine<Joueur*>();
}

bool AssociationPersonnageJoueur::nouveauJoueur(Joueur *joueur){
		if(listeJoueurs_.find(joueur->getPseudo())==listeJoueurs_.end()){//si le joueur n'est pas dans la map
			listeJoueurs_[joueur->getPseudo()] = joueur;
			placementJoueur_.push_back(joueur->getPseudo());
			return false;
		}
		return true;		
}
bool AssociationPersonnageJoueur::nouveauPersonnage(Personnage *personnage){
	if(listePersonnages_.find(personnage->getOrdre())==listePersonnages_.end()){
		listePersonnages_[personnage->getOrdre()] = personnage;
		return false;
	}
		return true;
}

int AssociationPersonnageJoueur::nbJoueurs(){
	return listeJoueurs_.size();
}

int AssociationPersonnageJoueur::nbPersonnages(){
	return listePersonnages_.size();
}

void AssociationPersonnageJoueur::associer(Personnage *p, Joueur *j){
	//TODO ne correspond pas à la déf de AssocJP_ et AssocPJ_
	AssocJP_[p->getNom()] = j;
	AssocPJ_[j->getPseudo()] = p;
	j->setComportement(p);

}

void AssociationPersonnageJoueur::associer(Joueur *j, Personnage *p){
	AssocPJ_[p->getOrdre()] =j;
	AssocJP_[j->getPseudo()] = p;
	j->setComportement(p);
}

void AssociationPersonnageJoueur::reinitialiser(){
	//TODO on ne peut pas mettre null
	for (map<string,Joueur*>::iterator iter = listeJoueurs_.begin(); iter != listeJoueurs_.end(); iter++ ){
		AssocJP_[iter->first] = -1;
	}

	for ( map<int, Personnage*>::iterator iter = listePersonnages_.begin(); iter != listePersonnages_.end(); iter++ ){
		AssocPJ_[iter->first] = "";
	}

	selection_ = false;

}

Joueur* AssociationPersonnageJoueur::retrouverJ(Personnage *p){
	return listeJoueurs_[AssocPJ_[p->getOrdre()]];
}
Personnage* AssociationPersonnageJoueur::retrouverP(Joueur *j){
	return listePersonnages_[AssocJP_[j->getPseudo()]];
}

vector<Personnage*> AssociationPersonnageJoueur::persosDisponible(){
	vector<Personnage*> tmp;

	for ( map<int,string>::iterator iter = AssocPJ_.begin(); iter != AssocPJ_.end(); iter++ ){
		if(iter->second =="")
			tmp.push_back(listePersonnages_[iter->first]);
	}
	return tmp;


}

Joueur* AssociationPersonnageJoueur::joueurSuivantTour(){
	if(tourCourant_.suivant != NULL){
		Maillon<Joueur*> tmp = tourCourant_;
		tourCourant_ = *tourCourant_.suivant;
		return tmp.element;
	}
	else
		return NULL;

}

void AssociationPersonnageJoueur::deplacerCurseurChoixPerso(bool init){
	if(!init){
			choixCourant_ = (choixCourant_ +1) % placementJoueur_.size();
	}
	else{
		selection_ = true;
		choixCourant_ = couronnement_;
	}
}

Joueur* AssociationPersonnageJoueur::joueurSuivantChoixPersonnages(){
	if((placementJoueur_.at(choixCourant_)).compare(couronnement_)!=0 && selection_ == true){
		this->deplacerCurseurChoixPerso();
		return listeJoueurs_[placementJoueur_.at(choixCourant_)];
	}
	else if((placementJoueur_.at(choixCourant_)).compare(couronnement_)==0 && selection_ == false){
		this->deplacerCurseurChoixPerso(true);
		return listeJoueurs_[placementJoueur_.at(choixCourant_)];
	}
	else
		return NULL;
}

Joueur* joueurSuivantDecomptePoints(){

}

void AssociationPersonnageJoueur::couronnement(Joueur* joueur){
	for(int i=0; i<placementJoueur_.size();++i){
		if((j->getNom()).compare((placementJoueur_.at(i))->getNom())){
			couronnement_ = i;
			break;
		}
	}
}

void modifierOrdreJoueur(Joueur * j){
	ordreTour->retirerElement(*j);
	ordreTour->insererQueue(*j);
}

void modifierOrdreJoueur(Joueur *j, Joueur *jj){
	ordreTour->retirerElement(*j);
	ordreTour->insererApres(*j,*jj);

}


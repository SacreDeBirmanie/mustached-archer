AssociationPersonnageJoueur::AssociationPersonnageJoueur() {
	Joueur * j = NULL;

	Chaine<string> ordreTour = new Chaine<string>();
}

bool AssociationPersonnageJoueur::nouveauJoueur(Joueur *joueur){
		if(this->listeJoueurs.find(joueur->getPseudo())){
			return true;
		}
		else{
			this->listeJoueurs[joueur->getPseudo()] = joueur;
			placementJoueur.push_back(joueur->getPseudo());
			return false;
		}
}
bool AssociationPersonnageJoueur::nouveauPersonnage(Personnage *personnage){
	if(this->listePersonnages.find(personnage->getOrdre())){
		return true;
	}
	else{
		this->listePersonnages[personnage->getOrdre()] = personnage;
		return false;
	}
}

int AssociationPersonnageJoueur::nbJoueurs(){
	return this->listeJoueurs.size();
}

int AssociationPersonnageJoueur::nbPersonnages(){
	return this->listePersonnages.size();
}

void AssociationPersonnageJoueur::associer(Personnage *p, Joueur *j){
	this->AssocJP[p->getNom()] = j;
	this->AssocPJ[j->getPseudo()] = p;
	*j->setComportement(Personnage *p);

}

void AssociationPersonnageJoueur::associer(Joueur *j, Personnage *p){
	this->AssocPJ[p->getOrdre()] =j;
	this->AssocJP[j->getPseudo()] = p;
	*j->setComportement(Personnage *p);
}

void AssociationPersonnageJoueur::reinitialiser(){
	for (map<String, Joueur> listeJoueurs::iterator iter = listeJoueurs.begin(); iter != listeJoueurs.end(); iter++ ){
		this->AssocJP[*iter.getNom()] = NULL;
	}

	for ( map<String,*Joueur>::iterator iter = listePersonnages.begin(); iter != listePersonnages.end(); iter++ ){
		this->AssocPJ[*iter.getOrdre()] = NULL;
	}

	selection_ = false;

}

Joueur* AssociationPersonnageJoueur::retrouverJ(Personnage *p){
	return *this->AssocPJ[p->getOrdre()];
}
Personnage* AssociationPersonnageJoueur::retrouverP(Joueur *j){
	return *this->AssocJP[j->getPseudo()];
}

vector<Personnage*> AssociationPersonnageJoueur::persosDisponible(){
	vector<Personnage*> tmp;

	for ( map<int,*Joueur>::iterator iter = assocPJ.begin(); iter != assocPJ.end(); iter++ ){
		if(iter->second ==NULL)
			tmp.push_back(listePersonnages[iter->first]);
	}
	return tmp;


}

Joueur* AssociationPersonnageJoueur::joueurSuivantTour(){
	if(tourCourant.suivant != NULL){
		Maillon<Joueur*> * tmp = tourCourant;
		tourCourant = tourCourant.suivant;
		return tmp->element;
	}
	else
		return NULL;

}

void AssociationPersonnageJoueur::deplacerCurseurChoixPerso(bool init=false){
	if(init==false){
			choixCourant_ = (choixCourant_ +1) % placementJoueur.size();
	else{
		selection_ = true;
		choixCourant_ = couronnement_;
	}
}

Joueur* AssociationPersonnageJoueur::joueurSuivantChoixPersonnages(){
	if(placementJoueur.at(choixCourant).getPseudo() != couronnement_ && selection_ == true){
		this->deplacerCurseurChoixPerso();
		return placementJoueur.at(choixCourant);
	}
	else if(placementJoueur.at(choixCourant).getPseudo() == couronnement_ && selection_ == false){
		this->deplacerCurseurChoixPerso(true);
		return placementJoueur.at(choixCourant);
	}
	else
		return NULL;
}

Joueur* joueurSuivantDecomptePoints(){

}

void AssociationPersonnageJoueur::couronnement(Joueur* joueur){
	for(int i=0, i<placementJoueur.size();++i){
		if((j->getNom()).compare((placementJoueur.at(i))->getNom())){
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


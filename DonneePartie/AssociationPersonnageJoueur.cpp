AssociationPersonnageJoueur::AssociationPersonnageJoueur(&vector<Joueur> js, &vector<Personnage> ps): listeJoueurs(js), listePersonnages(ps) {
	
}
vector<Personnage> AssociationPersonnageJoueur::getListePersonnages(){
	return this->listePersonnages;
}

void AssociationPersonnageJoueur::associer(Personnage *p, Joueur *j){
	this->AssocJP[p.getNom()] = j;
	this->AssocPJ[j.getPseudo()] = p;
}
Joueur AssociationPersonnageJoueur::retrouverJ(Personnage p){
	return this->AssocPJ[p.getNom()];
}
Personnage AssociationPersonnageJoueur::retrouverP(Joueur j){
	return this->AssocJPP[j.getNom()];
}

vector<Personnage> persosDisponible(){
	vector<Personnage> tmp;
	
	for ( vector<Joueur>::iterator iter = listePersonnages.begin(); iter != listePersonnages.end(); iter++ ){
		if(!retrouverJ(*iter.getNom())==
	}
	
	
}

vector<Joueur> AssociationPersonnageJoueur::ordreTour(){
	vector<Joueur> tmp = this->js;
	sort(tmp.begin(), tmp.end(), );
	
}

vector<Joueur> AssociationPersonnageJoueur::ordreChoixPersonnages(){
	
}

void AssociationPersonnageJoueur::couronnement(Joueur *j,Personnage p){
	String[] regents = {Roi.getNom(),Empereur.getNom};
}


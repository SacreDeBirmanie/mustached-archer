AssociationPersonnageJoueur::AssociationPersonnageJoueur(const &vector<Joueur> js, const &vector<Personnage> ps): listeJoueurs(js), listePersonnages(ps), {
	
}
void AssociationPersonnageJoueur::associer(Personnage p, Joueur j){
	this->AssocJP[p.getNom()]=j.getPseudo();
	this->AssocPJ[j.getPseudo()]p.getNom();
}
Joueur AssociationPersonnageJoueur::retrouverJ(Personnage p){
	return this->AssocPJ[p.getNom()];
}
Personnage AssociationPersonnageJoueur::retrouverP(Joueur j){
	return this->AssocJPP[j.getNom()];
}
vector<Joueur> AssociationPersonnageJoueur::ordreTour(){
	vector<Joueur> tmp = this->js;
	sort(tmp.begin(), tmp.end(), );
	
}

vector<Joueur> AssociationPersonnageJoueur::ordreChoixPersonnages(){
	
}



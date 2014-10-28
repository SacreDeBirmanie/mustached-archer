AssociationPersonnageJoueur::AssociationPersonnageJoueur() {
	
}

AssociationPersonnageJoueur::AssociationPersonnageJoueur(&vector<Joueur> js, &vector<Personnage> ps) {
	
}

int nouveauJoueur(Joueur &joueur){
	if(this->listeJoueurs.find(joueur.getPseudo())){
		return 1;
	}
	else{
		this->listeJoueurs[joueur.getPseudo()] = joueur;
		return 0;
	}
}
int nouveauPersonnage(Personnage &personnage){
	if(this->listePersonnages.find(personnage.getOrdre()){
		return 1;
	}
	else{
		this->listePersonnages[personnage.getOrdre()] = personnage;
		return 0;
	}
}
vector<Personnage> AssociationPersonnageJoueur::getListePersonnages(){
	return this->listePersonnages;
}

void AssociationPersonnageJoueur::associer(Personnage *p, Joueur *j){
	this->AssocJP[p.getNom()] = j;
	
}

void AssociationPersonnageJoueur::associer(Joueur *j, Personnage *p){
	this->AssocPJ[j.getPseudo()] = p;
}

void AssociationPersonnageJoueur::reinitialiser(){
	for (map<String, Joueur> listeJoueurs::iterator iter = listeJoueurs.begin(); iter != listeJoueurs.end(); iter++ ){
		this->AssocJP[*iter.getNom()] = NULL;
	}
	
	for ( map<String,*Joueur>::iterator iter = listePersonnages.begin(); iter != listePersonnages.end(); iter++ ){
		this->AssocPJ[*iter.getOrdre()] = NULL;
	}
}

Joueur AssociationPersonnageJoueur::retrouverJ(Personnage p){
	return this->AssocPJ[p.getNom()];
}
Personnage AssociationPersonnageJoueur::retrouverP(Joueur j){
	return this->AssocJPP[j.getNom()];
}

vector<Personnage> persosDisponible(){
	vector<Personnage*> tmp;
	
	for ( map<String,*Joueur>::iterator iter = listePersonnages.begin(); iter != listePersonnages.end(); iter++ ){
		if(iter->second ==NULL)
			tmp.push_back()
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


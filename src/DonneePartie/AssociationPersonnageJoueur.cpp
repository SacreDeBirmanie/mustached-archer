AssociationPersonnageJoueur::AssociationPersonnageJoueur() {
	
}

AssociationPersonnageJoueur::AssociationPersonnageJoueur(&vector<Joueur> js, &vector<Personnage> ps) {
	
}

int nouveauJoueur(Joueur &joueur){
	if(this->listeJoueurs.find(joueur.getPseudo())){
		return true;
	}
	else{
		this->listeJoueurs[joueur.getPseudo()] = joueur;
		return false;
	}
}
int nouveauPersonnage(Personnage &personnage){
	if(this->listePersonnages.find(personnage.getOrdre()){
		return true;
	}
	else{
		this->listePersonnages[personnage.getOrdre()] = personnage;
		return false;
	}
}

int nbJoueurs(){
	return this->listeJoueurs.size();
}

int nbPersonnages(){
	return this->listePersonnages.size();
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
	ordreTour = new Joueur[this.listejoueur.size()];
	this.curseur =0;
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
			tmp.push_back();
	}
	
	
}

Joueur AssociationPersonnageJoueur::joueurSuivantTour(){
	this.curseur++;
	return ordreTour[this.curseur--];
	
}

vector<Joueur> AssociationPersonnageJoueur::joueurSuivantChoixPersonnages(){
	
}

void AssociationPersonnageJoueur::couronnement(Joueur *j,Personnage p){
	String[] regents = {Roi.getNom(),Empereur.getNom()};
}


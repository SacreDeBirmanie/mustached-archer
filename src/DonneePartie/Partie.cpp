Partie::Partie(std::vector<Personnage> persos, Pioche pioche, int tailleVille):
roles(new AssociationPersonnageJoueur(persos,joueurs)), limiteTailleVille(tailleVille){

}

void nouveauJoueur(Joueur joueur){
	
}
void nouveauPersonnage(Personnage personnage){
	
}

Partie::entreDeuxTours(){
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		*iter.setComportement(Neutre);
		roles.reinitialiser();
	}
}

Partie::choixDesPersonnages(){
	vector<Personnage> tmp = roles.getListePersonnages();
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		*iter.choisirPersonnage(this,tmp);
	}
}

Partie::DebutDuJeu(Association assoc,Pioche pioche){
	while(!finDuJeu()){
		EntreDeuxTours();
		choixDesPersonnages();
		lancementDuTour();
	}
	proclamerLeVainqueur();
}

Partie::lancementDuTour(){
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		*iter.jouer(this);
	}
}

Partie::finDuJeu(){
	return this->villeComplete;
}

Partie::decompteDesPoints(&map<String;int> tmp){//************tableau associatif n'est pas forcément le meilleur choix********
	
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		tmp[*iter.getPseudo()]=*iter.decompteDesPoints();
	}
	
}

void Partie::associer(Personnage p, Joueur j){
	this->roles.associer(p,j);
}

void Partie::proclamerLeVainqueur(Association assoc,Pioche pioche){
	map<String,int> tmp;
	decompteDesPoints(tmp);
	cout<<"Et Le vainqueur est ...."<<endl;;
}

int prendrePiece(int nombre){
	this->pioche.prendrePiece();
}

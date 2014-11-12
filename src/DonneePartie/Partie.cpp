Partie::Partie(Pioche pioche, int tailleVille=8):
pioche(pioche), limiteTailleVille(tailleVille){

}

void nouveauJoueur(Joueur &joueur){
	if(roles.nouveauJoueur(joueur))
		cout<<"Le joueur "<<joueur.getPseudo()<<" a deja ete ajoute dans la partie");
}

void nouveauPersonnage(Personnage & personnage){
	if(roles.nouveauPersonnage(personnage))
		cout<<"Le personnage "<<personnage.getNom()<<" a deja ete ajoute dans la partie");
}

Partie::entreDeuxTours(){
	roles.reinitialiser();
}



Partie::choixDesPersonnages(){
	Joeur 
	while()
}

Partie::DebutDuJeu(Association assoc,Pioche pioche){
	if(roles.nbJoueurs>=roles.nbPersonnages)
		cout<<"impossible de demarrer la partie, il manque des personnages"<<endl;
	else{
		while(!finDuJeu()){
			EntreDeuxTours();
			choixDesPersonnages();
			lancementDuTour();
		}
		proclamerLeVainqueur();
	}
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

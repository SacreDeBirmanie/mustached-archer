Partie::Partie(std::vector<Personnage> persos, AssociationPersonnageJoueur assoc, Pioche pioche, std::vector<Joueurs> joueurs){
		this->personnages = persos;
		this->joueurs = joueurs
		this->assocPJ = assoc;
		this->pioche = pioche;
}

Partie::entreDeuxTours(){
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		*iter.setComportement(ComportementNeutreIA.getComportement())
	}
}

Partie::choixDesPersonnages(){
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		*iter.jouer(this);
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

Partie::lancementDuTour(Association assoc,Pioche pioche){
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		*iter.jouer(this);
	}
}

Partie::finDuJeu(){
	if (VilleA8==0)
		return true;
	else
		return false;
}

Partie::decompteDesPoints(&map<String;int> tmp){//************tableau associatif n'est pas forcément le meilleur choix********
	
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		tmp[*iter.getPseudo()]=*iter.decompteDesPoints();
	}
	
}

Partie::proclamerLeVainqueur(Association assoc,Pioche pioche){
	map<String,int> tmp;
	decompteDesPoints(tmp);
	cout<<"Et Le vainqueur est ...."<<endl;;
}

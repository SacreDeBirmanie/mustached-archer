Partie::Partie(std::vector<Personnage> persos, Pioche pioche, int tailleVille):
roles(new AssociationPersonnageJoueur(persos,joueurs)), limiteTailleVille(tailleVille){

}

Partie::entreDeuxTours(){
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		*iter.setComportement(ComportementNeutreIA.getComportement());
		roles.associer(*iter,Neutre);
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
	if (VilleComplete>=limiteTailleVille)
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

ComportementVoleurMachine::ComportementVoleurMachine():ComportementMachine(){

}

void ComportementVoleurMachine::jouer(Partie * partie, Joueur * joueur){
	choisirGainTour(joueur);
	choixVole(partie,joueur);
	choisirConstruction(joueur);
}

void ComportementVoleurMachine::choixVole(Partie * partie, Joueur * joueur){
	vector<Joueur*> tmp = partie->recupererListeJoueurs();
	Joueur * plusRiche = tmp.front();

	for ( vector<Joueur*>::iterator iter = tmp.begin()+1; iter != tmp.end(); iter++ ){
		if(plusRiche->getPieceOr()<(*iter)->getPieceOr())
			plusRiche = (*iter);
	}

	Voleur::voler(joueur,plusRiche);
}

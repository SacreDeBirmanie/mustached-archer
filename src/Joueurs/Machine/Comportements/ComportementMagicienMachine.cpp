ComportementMagicienMachine::ComportementMagicienMachine():ComportementMachine(){

}

void ComportementMagicienMachine::jouer(Partie * partie,Joueur * joueur){
	choisirGainTour(joueur);
	choixPouvoir(partie,joueur);
	choisirConstruction(joueur);
}

void ComportementMagicienMachine::choixPouvoir(Partie * partie, Joueur * joueur){
	int i = Aleatoire::tirerEntier(1,2);

	if(i==1){
		vector<Joueur*> tmp =  partie->recupererListeJoueurs();
		vector<int> exclus;
		bool trouve = false;
		int i;

		while(!trouve && exclus.size() < tmp.size()){
			i = Aleatoire::tirerEntierAvecExclusion(exclus,0,tmp.size()-1);
			if(tmp.at(i) != joueur){
				trouve = true;
				Magicien::echangerMainContreJoueur(joueur,tmp.at(i));
			}

		}
	}
	else{
		Magicien::echangerMainContrePioche(joueur->getMain(),joueur);
	}
}

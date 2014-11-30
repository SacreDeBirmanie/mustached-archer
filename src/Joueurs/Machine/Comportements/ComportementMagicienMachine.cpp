ComportementMagicienMachine::ComportementMagicienMachine(){

}

void jouer(Partie * partie,Joueur * joueur){
	choisirGainTour(j);
	choixPouvoir(p,j);
	choisirConstruction(j);
}

void choixPouvoir(Partie * partie, Joueur * joueur){
	int i = Aleatoire::tirerEntier(1,2);
	
	if(i==1){
		vector<Joueur*> tmp =  p->recupererListeJoueurs();
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
		Magicien::echangerMainContreJoueur(joueur->getMain(),joueur);
	}
}
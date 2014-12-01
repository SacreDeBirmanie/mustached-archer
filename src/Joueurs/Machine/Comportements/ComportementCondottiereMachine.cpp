ComportementCondottiereMachine::ComportementCondottiereMachine():ComportementMachine(){

}

void ComportementCondottiereMachine::jouer(Partie * partie, Joueur * joueur){
	Condottiere::capacite(joueur);
	choisirGainTour(joueur);
	choisirConstruction(joueur);
	choixDestruction(partie,joueur);

}

void ComportementCondottiereMachine::choixDestruction(Partie * partie , Joueur * joueur){
	vector<Joueur*> tmp = partie->recupererListeJoueurs();
	vector<int> exclus;
	int i;
	Joueur * jj;
	bool trouve =false;

	while(exclus.size() < tmp.size() && !trouve){
		i = Aleatoire::tirerEntierAvecExclusion(exclus,0,tmp.size()-1);
		jj = tmp.at(i);
		if(jj != joueur){
			vector<Quartier*> qq= jj->recupererCite();

			for(vector<Quartier*>::iterator iter=qq.begin();iter!=qq.end();++iter){
				if(Condottiere::destruction(joueur,jj,(*iter))){
					trouve = true;
				}
			}
		}
	}
}

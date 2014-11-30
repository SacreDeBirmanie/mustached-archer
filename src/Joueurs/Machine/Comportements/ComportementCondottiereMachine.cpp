ComportementCondottiere::ComportementCondottiere(){

}

ComportementCondottiere::jouer(Partie * partie, Joueur * joueur){
	Condottiere::capacite(joueur);
	choisirGainTour(j);
	choisirConstruction(j);
	choixDestruction(p,j);

}

void ComportementCondottiere::choixDestruction(partie * partie , Joueur * joueur){
	vector<Joueur*> tmp = partie->recupererListeJoueurs();
	vector<Joueur*> exclus;
	int i =Aleatoire::tirerEntierAvecExclusion(exclus,0,tmp.size()-1);
	Joueur * jj;
	
	while(exclus.size < tmp.size() && !trouve){
		jj = tmp.at(i);
		vector<Quartier*> qq= jj->recupererCite();
		
		for(vector<Quartier*>::iterator quartier=qq.begin();quartier!=qq.end();++quartier){
			if(Condottiere::destruction(joueur,jj,qq)){
				trouve = true;
			}
		}
	}
}

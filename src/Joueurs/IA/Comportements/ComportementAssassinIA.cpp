/**
*   Fichier ComportementMacchabeeIA.hpp
*/
ComportementAssassinIA::ComportementAssassinIA():ComportementIA(){}

void ComportementAssassinIA::jouer(Partie *p, Joueur *j){
	choisirGainTour(j);
	choixAssassinat(p,j);
	choisirConstruction(j);


}

void ComportementAssassinIA::choixAssassinat(Partie * p, Joueur * j){
	vector<Joueur*> tmp =  p->recupererListeJoueurs();
	vector<int> exclus;
	bool trouve = false;
	int i;

	while(!trouve && exclus.size() < tmp.size()){
		i = Aleatoire::tirerEntierAvecExclusion(exclus,0,tmp.size());
		if(tmp.at(i) != j){
			trouve = true;
			Assassin::assassiner(p,p->retrouverP(tmp.at(i)));
		}

	}

}

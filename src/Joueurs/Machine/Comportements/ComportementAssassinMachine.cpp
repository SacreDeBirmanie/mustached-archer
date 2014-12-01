/**
*   Fichier ComportementMacchabeeMachine.hpp
*/
ComportementAssassinMachine::ComportementAssassinMachine():ComportementMachine(){}

void ComportementAssassinMachine::jouer(Partie *p, Joueur *j){
	choisirGainTour(j);
	choixAssassinat(p,j);
	choisirConstruction(j);


}

void ComportementAssassinMachine::choixAssassinat(Partie * p, Joueur * j){
	vector<Personnage*> tmp =  p->recupererListePersonnages();
	vector<int> exclus;
	bool trouve = false;
	int i;

	while(!trouve && exclus.size() < tmp.size()){
		i = Aleatoire::tirerEntierAvecExclusion(exclus,0,tmp.size()-1);
		if(tmp.at(i) != p->retrouverP(j)){
			trouve = true;
			Assassin::assassiner(p,tmp.at(i));
		}

	}

}

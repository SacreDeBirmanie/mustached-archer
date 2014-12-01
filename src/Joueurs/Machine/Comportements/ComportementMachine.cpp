/**
*   Fichier ComportementMachine.cpp
*/

ComportementMachine::ComportementMachine():Comportement(){

}

void ComportementMachine::jouer(Partie * p, Joueur * j){

}

void ComportementMachine::choisirPersonnage(Partie *p, vector<Personnage*> persosDispo,Joueur *j){
	int nb = Aleatoire::tirerEntier(0,persosDispo.size());
	p->associer(persosDispo.at(nb),j);
}

void ComportementMachine::choisirGainTour(Joueur *j){
	int nb = Aleatoire::tirerEntier(0,1);

	if(nb == 0)
		j->piocher(1);
	else
		j->prendrePiece(2);


}

void ComportementMachine::choisirConstruction(Joueur * j){
	vector<Quartier*> tmp = j->getMain();
	int i = 0;
	bool trouve =false;

	while(tmp.size() > 0 && !trouve){
		i = Aleatoire::tirerEntier(0,tmp.size());
		if(j->construire(tmp.at(i)))
			trouve = true;
		else
			tmp.erase(tmp.begin()+i-1);
	}
}


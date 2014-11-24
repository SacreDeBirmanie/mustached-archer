/**
*   Fichier ComportementIA.cpp
*/

ComportementIA::ComportementIA(){
		
}

void jouer(Partie p, Joueur j){
	
}

void choisirPersonnage(Partie *p, Joueur *j, vector<Personnage*> persosDispo){
	int nb = Aleatoire::tirerEntier(0,persosDispo.size());
	p->associer(persosDispo.at(nb),j);
	p->erase(nb);
}

void choisirGainTour(Joueur *j){
	int nb = Aleatoire::tirerEntier(0,1);
		
	if(nb == 0)
		j->piocher(1);
	else	
		j->prendrePiece(2);
		

}

void choisirConstruction(Joueur * j){
	vector<int> exclus = new vector<int>();
	int nb = Aleatoire::tirerEntierAvecExclusion(exclus,0,j->getMain().size());
	
	while(!j->construire(j->getMain().get(nb)) && j->getMain().size()> exclus.size()){
		exclus.push_back(nb);
		nb = Aleatoire::tirerEntierAvecExclusion(exclus,0,j->getMain().size())
	}

}
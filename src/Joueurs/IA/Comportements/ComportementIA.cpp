/**
*   Fichier ComportementIA.cpp
*/

ComportementIA::ComportementIA():Comportement(){

}

void ComportementIA::jouer(Partie * p, Joueur * j){

}

void ComportementIA::choisirPersonnage(Partie *p, vector<Personnage*> persosDispo,Joueur *j){
	int nb = Aleatoire::tirerEntier(0,persosDispo.size());
	p->associer(persosDispo.at(nb),j);
}

void ComportementIA::choisirGainTour(Joueur *j){
	int nb = Aleatoire::tirerEntier(0,1);

	if(nb == 0)
		j->piocher(1);
	else
		j->prendrePiece(2);


}

void ComportementIA::choisirConstruction(Joueur * j){
	vector<int> exclus;
	int nb = Aleatoire::tirerEntierAvecExclusion(exclus,0,(unsigned int)j->getMain().size());

	while(!j->construire(j->getMain().at(nb)) && j->getMain().size()> exclus.size()){
		exclus.push_back(nb);
		nb = Aleatoire::tirerEntierAvecExclusion(exclus,0,(unsigned int)j->getMain().size());
	}

}

/*!
* \file ComportementMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementMachine::ComportementMachine():Comportement(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementMachine::~ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief méthode pour choisir un personnage
* \param p la partie
* \param persosDispo les personnages disponibles
* \param j le joueur
*/
void ComportementMachine::choisirPersonnage(Partie *p, vector<Personnage*> persosDispo,Joueur *j){
	int nb = Aleatoire::tirerEntier(0,persosDispo.size());
	p->associer(persosDispo.at(nb),j);
}

//--------------------------------------------------
/*!
* \brief méthode pour choisir entre piocher ou prendre des pièces
* \param joueur le joueur
*/
void ComportementMachine::choisirGainTour(Joueur *j){
	int nb = Aleatoire::tirerEntier(0,1);

	if(nb == 0)
		j->piocher(1);
	else
		j->prendrePiece(2);


}

//--------------------------------------------------
/*!
* \brief méthode pour choisir quel batiment construire
* \param j le joueur
*/
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


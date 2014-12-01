/*!
* \file ComportementAssassinMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementAssassinMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementAssassinMachine::ComportementAssassinMachine():ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementAssassinMachine::~ComportementAssassinMachine(){}


//--------------------------------------------------
/*!
* \brief méthode de jeu pour l'assassin machine
* \param partie la partie
* \param joueur le joueur
*/
void ComportementAssassinMachine::jouer(Partie *p, Joueur *j){
	choisirGainTour(j);
	choixAssassinat(p,j);
	choisirConstruction(j);
}


//--------------------------------------------------
/*!
* \brief méthode qui effectue l'assassinat
* \param partie la partie
* \param joueur le joueur
*/
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

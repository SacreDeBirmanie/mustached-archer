/*!
* \file ComportementVoleurMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementVoleurMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementVoleurMachine::ComportementVoleurMachine():ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementVoleurMachine::~ComportementVoleurMachine(){}

//--------------------------------------------------
/*!
* \brief méthode de jeu pour le voleur machine
* \param partie la partie
* \param joueur le joueur
*/
void ComportementVoleurMachine::jouer(Partie * partie, Joueur * joueur){
	choisirGainTour(joueur);
	choixVole(partie,joueur);
	choisirConstruction(joueur);
}

//--------------------------------------------------
/*!
* \brief méthode qui vole le joueur le plus riche
* \param partie la partie
* \param joueur le joueur
*/
void ComportementVoleurMachine::choixVole(Partie * partie, Joueur * joueur){
	vector<Joueur*> tmp = partie->recupererListeJoueurs();
	Joueur * plusRiche = tmp.front();

	for ( vector<Joueur*>::iterator iter = tmp.begin()+1; iter != tmp.end(); iter++ ){
		if(plusRiche->getPieceOr()<(*iter)->getPieceOr())
			plusRiche = (*iter);
	}

	Voleur::voler(joueur,plusRiche);
}

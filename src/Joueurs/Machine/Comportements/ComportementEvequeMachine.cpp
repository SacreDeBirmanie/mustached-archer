/*!
* \file ComportementEvequeMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementEvequeMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementEvequeMachine::ComportementEvequeMachine():ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementEvequeMachine::~ComportementEvequeMachine(){}

//--------------------------------------------------
/*!
* \brief méthode de jeu pour l'eveque machine
* \param partie la partie
* \param joueur le joueur
*/
void ComportementEvequeMachine::jouer(Partie * p, Joueur * joueur){
	Eveque::capacite(joueur);
	choisirGainTour(joueur);
	choisirConstruction(joueur);
}

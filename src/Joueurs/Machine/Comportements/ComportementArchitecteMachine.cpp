/*!
* \file ComportementArchitecteMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementArchitecteMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementArchitecteMachine::ComportementArchitecteMachine():ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementArchitecteMachine::~ComportementArchitecteMachine(){}

//--------------------------------------------------
/*!
* \brief méthode de jeu pour l'architecte machine
* \param partie la partie
* \param joueur le joueur
*/
void ComportementArchitecteMachine::jouer(Partie * partie, Joueur * joueur){
	Architecte::capacite(joueur);
	choisirGainTour(joueur);
	choisirConstruction(joueur);
	choisirConstruction(joueur);
	choisirConstruction(joueur);
}

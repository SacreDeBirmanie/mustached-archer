/*!
* \file ComportementMarchandMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementMarchandMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementMarchandMachine::ComportementMarchandMachine():ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementMarchandMachine::~ComportementMarchandMachine(){}

//--------------------------------------------------
/*!
* \brief méthode de jeu pour le marchand machine
* \param partie la partie
* \param joueur le joueur
*/
void ComportementMarchandMachine::jouer(Partie * partie, Joueur * joueur){
	choisirGainTour(joueur);
	Marchand::capacite(joueur);
	choisirConstruction(joueur);
}

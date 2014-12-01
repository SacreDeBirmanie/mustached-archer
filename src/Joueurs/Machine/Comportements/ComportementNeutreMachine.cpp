/*!
* \file ComportementNeutreMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementNeutreMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementNeutreMachine::ComportementNeutreMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementNeutreMachine::~ComportementNeutreMachine(){}

//--------------------------------------------------
/*!
* \brief méthode de jeu pour le neutre
* \param partie la partie
* \param joueur le joueur
*/
void jouer(Partie p, Joueur j){}

//--------------------------------------------------
/*!
* \brief méthode de choix de personnage
* \param p la partie
* \param j le joueur
* \param persosDispo les personnages disponibles
*/
void choisirPersonnage(Partie p, Joueur j, vector<Personnage> & persosDispo){
	int nb = Aleatoire.tirerEntier(0,persosDispo.size());
	p->associer(persosDispo.at(nb),j);
	p->erase(nb);
}

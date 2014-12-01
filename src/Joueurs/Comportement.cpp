/*!
* \file Comportement.cpp
* \brief Fichier contenant l'implémentation de la classe Comportement
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
Comportement::Comportement(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Comportement::~Comportement(){}

//--------------------------------------------------
/*!
* \brief Méthode qui fait choisir un personnage au joueur
* \param p la partie
* \param persosDispo les personnages disponibles
* \param j le joueur
*/
void Comportement::choisirPersonnage(Partie * p, vector<Personnage*> persosDispo,Joueur * j){}

//--------------------------------------------------
/*!
* \brief Méthode qui fait choisir au joueur de tirer des cartes ou prendre des pièces 
* \param j le joueur
*/
void Comportement::choisirGainTour(Joueur * j){}

//--------------------------------------------------
/*!
* \brief Méthode qui fait choisir au joueur quel batiment construire
* \param j le joueur
*/
void Comportement::choisirConstruction(Joueur * j){}

/*!
* \file Donjon.cpp
* \brief Fichier contenant l'implémentation de la classe Donjon
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/


//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
 Donjon::Donjon(string nom, int type,int cout){
	Merveille("Donjon",0,3);
 }

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Donjon::~Donjon(){}


//--------------------------------------------------
/*!
 * \brief le donjon ne peut être détruit par le condottiere
 */
void Donjon::pouvoir(){}


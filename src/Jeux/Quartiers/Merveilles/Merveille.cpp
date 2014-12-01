/*!
* \file Merveille.cpp
* \brief Fichier contenant l'implémentation de la classe Merveille
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/


//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param nom le nom
* \param type le type
* \param cout le cout
*/
 Merveille::Merveille(string nom, int type,int cout){
	Quartier(nom,type,cout);
 }

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Merveille::~Merveille(){}

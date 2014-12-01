/*!
* \file Personnage.cpp
* \brief Fichier contenant l'implémentation de la classe Personnage
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param nom le nom
* \param ordre l'ordre dans lequel le personnage joue
* \param comp le comportement
*/
Personnage::Personnage(string nom, int numero, ComportementMachine * comp) :
	nom_(nom), numero_(numero), comportementMachine_(comp){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Personnage::~Personnage(){}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #numero_
* \return l'ordre du personnage
*/
int Personnage::getOrdre(){
	return numero_;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #nom_
* \return le nom du personnage
*/
string Personnage::getNom(){
	return nom_;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #comportementMachine_
* \return le comportement du personnage
*/
ComportementMachine* Personnage::getComportementMachine(){
	return comportementMachine_;
}

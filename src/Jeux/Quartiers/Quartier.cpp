/*!
* \file Quartier.cpp
* \brief Fichier contenant l'implémentation de la classe Quartier
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
 Quartier::Quartier(string nom, int type,int cout){
	 nom_ = nom;
	 type_ = type;
	 cout_ = cout;
 }

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Quartier::~Quartier(){}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #nom_
* \return le nom
*/
string Quartier::getNom(){
	return nom_;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #cout_
* \return le cout
*/
int Quartier::getCout(){
	return cout_;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #type_
* \return le type
*/
int Quartier::getType(){
	return type_;
}

//--------------------------------------------------
/*!
* \brief Teste si le quartier est marchand
* \return vrai si il est marchand
*/
bool Quartier::estMarchand(){
	return type_==MARCHAND;
}

//--------------------------------------------------
/*!
* \brief Teste si le quartier est religieux
* \return vrai si il est religieux
*/
bool Quartier::estReligieux(){
	return type_==RELIGIEUX;
}

//--------------------------------------------------
/*!
* \brief Teste si le quartier est noble
* \return vrai si il est noble
*/
bool Quartier::estNoble(){
	return type_==NOBLE;
}

//--------------------------------------------------
/*!
* \brief Teste si le quartier est militaire
* \return vrai si il est militaire
*/
bool Quartier::estMilitaire(){
	return type_==MILITAIRE;
}


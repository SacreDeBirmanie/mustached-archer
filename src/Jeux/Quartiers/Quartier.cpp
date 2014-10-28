/*!
 * \file Quartier.cpp
 * \brief La classe quartier
 * \author François Hallereau & Sébastien Vallée
 */
 
 Quartier::Quartier(string nom, int type,int cout){
	 this->nom = nom;
	 this->type = type;
	 this-> cout = cout;
 }

Quartier::~Quartier(){}

string Quartier::getNom(){
	return nom;
}

int Quartier::getCout(){
	return cout;
}
		
bool estMarchand(){
	return type==MARCHAND;
}
bool estReligieux(){
	return type==RELIGIEUX;
}
bool estNoble(){
	return type==NOBLE;
}
bool estMilitaire(){
	return type==MILITAIRE;
}

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
		
bool Quartier::estMarchand(){
	return type==MARCHAND;
}
bool Quartier::estReligieux(){
	return type==RELIGIEUX;
}
bool Quartier::estNoble(){
	return type==NOBLE;
}
bool Quartier::estMilitaire(){
	return type==MILITAIRE;
}

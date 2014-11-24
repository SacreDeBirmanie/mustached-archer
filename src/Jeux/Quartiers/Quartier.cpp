/*!
 * \file Quartier.cpp
 * \brief La classe quartier
 * \author François Hallereau & Sébastien Vallée
 */

 Quartier::Quartier(string nom, int type,int cout){
	 nom_ = nom;
	 type_ = type;
	 cout_ = cout;
 }

Quartier::~Quartier(){}

string Quartier::getNom(){
	return nom_;
}

int Quartier::getCout(){
	return cout_;
}

int Quartier::getType(){
	return type_;
}

int Quartier::getPoints(){
	return this->cout_;
}

bool Quartier::estMarchand(){
	return type_==MARCHAND;
}
bool Quartier::estReligieux(){
	return type_==RELIGIEUX;
}
bool Quartier::estNoble(){
	return type_==NOBLE;
}
bool Quartier::estMilitaire(){
	return type_==MILITAIRE;
}


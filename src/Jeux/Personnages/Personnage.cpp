/** \file Personnage.cpp
* \bref Définition du type Personnage
*
* Classe abstraite qui définit la classe Personnage
*/

Personnage::Personnage(){}

int Personnage::getOrdre(){
	return numero_;
}

string Personnage::getNom(){
	return nom_;
}

ComportementIA Personnage::getComportementIA(){
	return comportementIA_;
}

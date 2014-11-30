/** \file Personnage.cpp
* \bref Définition du type Personnage
*
* Classe abstraite qui définit la classe Personnage
*/

Personnage::Personnage(string nom, int numero, ComportementMachine * comp) :
	nom_(nom), numero_(numero), comportementMachine_(comp)
{

}

int Personnage::getOrdre(){
	return numero_;
}

string Personnage::getNom(){
	return nom_;
}

ComportementMachine* Personnage::getComportementMachine(){
	return comportementMachine_;
}

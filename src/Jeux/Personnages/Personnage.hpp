/** \file Personnage.hpp
* \bref Définition du type Personnage
* 
* Classe abstraite qui définit la classe Personnage
*/

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string> // pour le type std::string

class Personnage{


	protected :	
		string nom;
		int numero;
		//ComportementIA comportementIA;
		

	public :
		//! Le constructeur
		Personnage();
		virtual void jouer() = 0;
		virtual void capacite() = 0;
		
};



/******************************************************************************/
#include "Personnage.cpp"
#endif // PERSONNAGE_HPP

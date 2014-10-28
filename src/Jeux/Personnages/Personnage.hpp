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
		String nom;
		int numero;
		ComportementIA comportementIA;
		

	public :
		//! Le constructeur
		virtual Personnage();
		void jouer();
		
};



/******************************************************************************/
#include "Personnage.cpp"
#endif // PERSONNAGE_HPP

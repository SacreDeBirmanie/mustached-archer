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
		string nom_;
		int numero_;
		ComportementIA comportementIA_;
		

	public :
		//! Le constructeur
		Personnage(string nom, int numero, ComportementIA comp);
		int getOrdre();
		string getNom();
		ComportementIA getComportementIA();
		
};



/******************************************************************************/
#endif // PERSONNAGE_HPP

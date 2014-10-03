/*
   Fichier Marchand.hpp

   Définition du type Marchand
*/

#ifndef MARCHAND_HPP
#define MARCHAND_HPP

#include <string> // pour le type std::string

class Marchand{


	private :

		

	public :
		Marchand();//constructeur de la classe Marchand
		int recevoirVert(Carte[] cite);
		int recompenseDebut();
		
};



/******************************************************************************/
#include "Marchand.cpp"
#endif // MARCHAND_HPP
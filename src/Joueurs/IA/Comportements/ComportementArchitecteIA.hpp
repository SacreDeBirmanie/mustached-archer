/**
*   Fichier ComportementArchitecteIA.hpp
*	\brief Définition du type ComportementArchitecteIA
*/

#ifndef COMPORTEMENTARCHITECTEIA_HPP
#define COMPORTEMENTARCHITECTEIA_HPP

#include <string> // pour le type std::string

class ComportementArchitecteIA : public ComportementIA{


	private :

		

	public :
		ComportementArchitecteIA();//constructeur de la classe
		void jouer();
		
};



/******************************************************************************/
#include "ComportementArchitecteIA.cpp"
#endif // COMPORTEMENTARCHITECTEIA_HPP

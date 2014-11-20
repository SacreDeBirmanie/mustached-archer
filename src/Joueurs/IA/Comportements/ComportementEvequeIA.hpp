/**
*   Fichier ComportementEvequeIA.hpp
*	\brief Définition du type ComportementEvequeIA
*/

#ifndef COMPORTEMENTEVEQUEIA_HPP
#define COMPORTEMENTEVEQUEIA_HPP

#include <string> // pour le type std::string

class ComportementEvequeIA : public ComportementIA{


	private :

		

	public :
		ComportementEvequeIA();//constructeur de la classe
		void jouer();
		
};



/******************************************************************************/
#include "ComportementEvequeIA.cpp"
#endif // COMPORTEMENTEVEQUEIA

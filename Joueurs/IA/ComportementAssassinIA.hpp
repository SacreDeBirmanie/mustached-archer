/*
   Fichier EtatAssassinIA.hpp

   Définition du type EtatAssassinIA
*/

#ifndef ETATASSASSINIA_HPP
#define ETATASSASSINIA_HPP

#include <string> // pour le type std::string

class EtatAssassinIA{


	private :

		

	public :
		EtatAssassinIA();//constructeur de la classe EtatAssassinIA
		void jouer();
		Personnage choixAssassinat();
		
};



/******************************************************************************/
#include "EtatAssassinIA.cpp"
#endif // ETATASSASSINIA_HPP

/*
   Fichier EtatVoleurIA.hpp

   Définition du type EtatVoleurIA
*/

#ifndef ETATVOLEURIA_HPP
#define ETATVOLEURIA_HPP

#include <string> // pour le type std::string

class EtatVoleurIA{


	private :

		

	public :
		EtatVoleurIA();//constructeur de la classe EtatVoleurIA
		void jouer();
		Personnage choixVole();
		
};



/******************************************************************************/
#include "EtatVoleurIA.cpp"
#endif // ETATVOLEURIA_HPP

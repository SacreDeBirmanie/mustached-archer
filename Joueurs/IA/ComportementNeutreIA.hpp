/*
   Fichier EtatNeutreIA.hpp

   Définition du type EtatNeutreIA
*/

#ifndef ETATNEUTREIA_HPP
#define ETATNEUTREIA_HPP

#include <string> // pour le type std::string

class ComportementNeutreIA{


	private :
		
		

	public :
		ComportementNeutreIA();//constructeur de la classe EtatNeutreIA
		void jouer(Partie p, Joueur j);
		
};



/******************************************************************************/
#include "EtatNeutreIA.cpp"
#endif // ETATNEUTREIA_HPP

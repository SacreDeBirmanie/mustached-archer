/*
   Fichier EtatCondottiere.hpp

   Définition du type EtatCondottiere
*/

#ifndef ETATCONDOTTIEREIA_HPP
#define ETATCONDOTTIEREIA_HPP

#include <string> // pour le type std::string

class EtatCondottiere{


	private :

		

	public :
		EtatCondottiere();//constructeur de la classe EtatCondottiere
		Joueur choixJoueurQuartier();
		Carte choixQuartierDetruit(Joueur joueur);
		
};



/******************************************************************************/
#include "EtatCondottiere.cpp"
#endif // ETATCONDOTTIEREIA_HPP

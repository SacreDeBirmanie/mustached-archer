/**
*   Fichier ComportementCondottiere.hpp
*   \brief Définition du type ComportementCondottiere
*/

#ifndef ETATCONDOTTIEREIA_HPP
#define ETATCONDOTTIEREIA_HPP

#include <string> // pour le type std::string

class ComportementCondottiere : public ComportementIA{


	private :

		

	public :
		ComportementCondottiere();//constructeur de la classe EtatCondottiere
		Joueur choixJoueurQuartier();
		Carte choixQuartierDetruit(Joueur joueur);
		
};



/******************************************************************************/
#include "ComportementCondottiere.cpp"
#endif // ETATCONDOTTIEREIA_HPP

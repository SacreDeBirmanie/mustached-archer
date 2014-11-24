/**
*   Fichier ComportementAssassinIA.hpp
*   Définition du type ComportementAssassinIA
*/

#ifndef ETATASSASSINIA_HPP
#define ETATASSASSINIA_HPP

#include <string> // pour le type std::string
#include "../../../Jeux/Personnages/Assassin.hpp"

class ComportementAssassinIA : public ComportementIA{


	private :
		
		

	public :
		ComportementAssassinIA();//constructeur de la classe EtatAssassinIA
		void jouer(Partie * p, Joueur * j);
		Personnage choixAssassinat();
		
};



/******************************************************************************/
#include "ComportementAssassinIA.cpp"
#endif // ETATASSASSINIA_HPP

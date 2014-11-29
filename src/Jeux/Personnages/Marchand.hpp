/*!
 * \file Marchand.cpp
 * \brief Classe Marchand qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef MARCHAND_HPP
#define MARCHAND_HPP

#include <string> // pour le type std::string
#include "Personnage.hpp"

class Marchand : public Personnage{


	private :

		

	public :
		Marchand();//constructeur de la classe Marchand
		//int recevoirVert(Carte[] cite);
		void capacite(Joueur* joueur);
		void jouer();
};



/******************************************************************************/
#include "Marchand.cpp"
#endif // MARCHAND_HPP

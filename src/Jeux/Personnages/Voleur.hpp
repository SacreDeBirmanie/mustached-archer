/*!
 * \file Voleur.hpp
 * \brief Classe Voleur qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef VOLEUR_HPP
#define VOLEUR_HPP

#include <string> // pour le type std::string
#include "Personnage.hpp"

class Voleur : public Personnage{


	private :

		

	public :
		Voleur();
		void capacite(Joueur* voleur,Joueur* vole);
		void jouer();
};



/******************************************************************************/
#include "Voleur.cpp"
#endif // VOLEUR_HPP


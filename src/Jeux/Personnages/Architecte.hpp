/*!
 * \file Architecte.hpp
 * \brief Classe Architecte qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef ARCHITECTE_HPP
#define ARCHITECTE_HPP

#include <string> // pour le type std::string
#include "Personnage.hpp"

class Architecte : public Personnage{


	private :

		

	public :
		Architecte();
		void capacite(Joueur* joueur);
		void jouer();
};



/******************************************************************************/
#include "Architecte.cpp"
#endif // ARCHITECTE_HPP




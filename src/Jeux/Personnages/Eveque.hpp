/*!
 * \file Eveque.hpp
 * \brief Classe Eveque qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef EVEQUE_HPP
#define EVEQUE_HPP

#include <string> // pour le type std::string
#include "Personnage.hpp"

class Eveque : public Personnage{


	private :

		

	public :
		Eveque();
		void capacite(Joueur* joueur);
		void jouer();
};



/******************************************************************************/
#include "Eveque.cpp"
#endif // EVEQUE_HPP



/*!
 * \file Roi.hpp
 * \brief Classe Roi qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef ROI_HPP
#define ROI_HPP

#include <string> // pour le type std::string
#include "Personnage.hpp"

class Roi : public Personnage{


	private :

		

	public :
		Roi();
		void capacite(Joueur* joueur);
		void jouer();
};



/******************************************************************************/
#include "Voleur.cpp"
#endif // VOLEUR_HPP



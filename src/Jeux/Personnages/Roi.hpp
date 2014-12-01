/*!
 * \file Roi.hpp
 * \brief Classe Roi qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef ROI_HPP
#define ROI_HPP

class Roi : public Personnage{


	private :

		

	public :
		Roi(string nom, int ordre, ComportementMachine * comp);
		static void capacite(Partie * partie,Joueur* joueur);
};


#include "../../Joueurs/Machine/Comportements/ComportementRoiMachine.hpp"
/******************************************************************************/
#include "Roi.cpp"
#endif // Roi



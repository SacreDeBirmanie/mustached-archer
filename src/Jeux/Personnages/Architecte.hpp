/*!
 * \file Architecte.hpp
 * \brief Classe Architecte qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef ARCHITECTE_HPP
#define ARCHITECTE_HPP


class Architecte : public Personnage{


	private :

		

	public :
		Architecte(string nom, int ordre, ComportementMachine * comp);
		static void capacite(Joueur* joueur);
};


#include "../../Joueurs/Machine/Comportements/ComportementArchitecteMachine.hpp"
/******************************************************************************/
#include "Architecte.cpp"
#endif // ARCHITECTE_HPP




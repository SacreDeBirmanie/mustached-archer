/*!
 * \file Eveque.hpp
 * \brief Classe Eveque qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef EVEQUE_HPP
#define EVEQUE_HPP

class Eveque : public Personnage{


	private :

		

	public :
		Eveque(string nom, int ordre, ComportementMachine * comp);
		static void capacite(Joueur* joueur);
};



#include "../../Joueurs/Machine/Comportements/ComportementEvequeMachine.hpp"
/******************************************************************************/
#include "Eveque.cpp"
#endif // EVEQUE_HPP



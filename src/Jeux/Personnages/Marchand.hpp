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
		Marchand(string nom, int ordre, ComportementMachine* comp);//constructeur de la classe Marchand
		static void capacite(Joueur* joueur);
};


#include "../../Joueurs/Machine/Comportements/ComportementMarchandMachine.hpp"
/******************************************************************************/
#include "Marchand.cpp"
#endif // MARCHAND_HPP

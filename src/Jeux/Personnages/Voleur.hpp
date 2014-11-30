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
		Voleur(string nom, int ordre, ComportementMachine * comp);
		static void voler(Joueur* voleur,Joueur* vole);
};



/******************************************************************************/
#include "Voleur.cpp"
#endif // VOLEUR_HPP


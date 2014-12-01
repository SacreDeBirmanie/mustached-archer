/*!
 * \file Voleur.hpp
 * \brief Classe Voleur qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef VOLEUR_HPP
#define VOLEUR_HPP
#include "Specialite/EstVole.hpp"
class Voleur : public Personnage{

	public :
		static EstVole * estVole_;



		Voleur(string nom, int ordre, ComportementMachine * comp, EstVole* perso);
		void setVole(Joueur * voleur, Joueur * cible);
		static void voler(Joueur* voleur,Joueur* vole);
};



/******************************************************************************/
#include "../../Joueurs/Machine/Comportements/ComportementVoleurMachine.hpp"
#include "../../Joueurs/Machine/Comportements/Specialite/ComportementEstVoleMachine.cpp"
#include "Voleur.cpp"
#endif // VOLEUR_HPP


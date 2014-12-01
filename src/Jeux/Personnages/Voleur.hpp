/*!
* \file Voleur.hpp
* \brief Fichier contenant les entêtes de la classe Voleur
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef VOLEUR_HPP
#define VOLEUR_HPP
#include "Specialite/EstVole.hpp"

//--------------------------------------------------
/*!
* \class Voleur
* \brief Classe implémentant le personnage Voleur
*/
class Voleur : public Personnage{

	public :
		static EstVole * estVole_;



		Voleur(string nom, int ordre, ComportementMachine * comp, EstVole* perso);
		~Voleur();
		void setVole(Joueur * voleur, Joueur * cible);
		static void voler(Joueur* voleur,Joueur* vole);
};



/******************************************************************************/
#include "../../Joueurs/Machine/Comportements/ComportementVoleurMachine.hpp"
#include "../../Joueurs/Machine/Comportements/Specialite/ComportementEstVoleMachine.cpp"
#include "Voleur.cpp"
#endif // VOLEUR_HPP


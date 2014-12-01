/**
*   Fichier EstVole.hpp
*   \brief Définition du type EstVole
*/

#ifndef ESTVOLE_HPP
#define ESTVOLE_HPP


class EstVole : public Personnage{

	private :
		Joueur * voleur_;
		Joueur * cible_;
		Comportement * comportement_;
	public :
		EstVole();//constructeur de la classe EstVole
        void setVole(Joueur * voleur, Joueur * cible, Comportement * comportement);
        void seFaireVoler();


};
#include "../../../Joueurs/Machine/Comportements/Specialite/ComportementEstVoleMachine.hpp"
#include "EstVole.cpp"
/******************************************************************************/
#endif // ESTVOLE_HPP

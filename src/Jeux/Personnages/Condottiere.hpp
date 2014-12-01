/*
   Fichier Condottiere.hpp

   Définition du type Condottiere
*/

#ifndef CONDOTTIERE_HPP
#define CONDOTTIERE_HPP

class Condottiere : public Personnage{


	private :


	public :
		Condottiere(string nom, int ordre, ComportementMachine* comp);//constructeur de la classe Condottiere
		static void capacite(Joueur* joueur);
		static bool destruction(Joueur * condo, Joueur * cible, Quartier * quartier);

};



#include "../../Joueurs/Machine/Comportements/ComportementCondottiereMachine.hpp"
/******************************************************************************/
#include "Condottiere.cpp"
#endif // CONDOTTIERE_HPP

/*
   Fichier Partie.hpp

   Définition du type Partie
*/

#ifndef PARTIE_HPP
#define PARTIE_HPP

#include <string> // pour le type std::string

class Partie{


	private :
		int VilleA8=0;
		Pioche pioche=new Pioche();
		Personnage[] personnage;
		Joueur[] joueurs;
		AssociationPersonnage[] roles;
		

	public :
		Partie();//constructeur de la classe Partie
		void remiseAuPropre();
		void choixDesPersonnages();
		void lancementDuTour();
		void DebutDuJeu();
		void finDuJeu();
		
		void jouer();
		
};



/******************************************************************************/
#include "Partie.cpp"
#endif // PARTIE_HPP

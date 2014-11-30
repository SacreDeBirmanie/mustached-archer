/*
   Fichier Condottiere.hpp

   Définition du type Condottiere
*/

#ifndef CONDOTTIERE_HPP
#define CONDOTTIERE_HPP

#include <string> // pour le type std::string

class Joueur;

class Condottiere : public Personnage{


	private :
		

	public :
		Condottiere();//constructeur de la classe Condottiere
		void capacite(Joueur* condottiere,Joueur* cible, Quartier* quartier);
		void jouer();
		
};



/******************************************************************************/
#include "Condottiere.cpp"
#endif // CONDOTTIERE_HPP

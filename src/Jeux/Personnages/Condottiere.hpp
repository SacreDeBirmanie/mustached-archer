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
		void capacite(Joueur* joueur);
		bool destruction(Joueur * condo, Joueur * cible, Quartier * quartier);

};



/******************************************************************************/
#include "Condottiere.cpp"
#endif // CONDOTTIERE_HPP

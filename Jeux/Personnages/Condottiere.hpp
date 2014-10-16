/*
   Fichier Condottiere.hpp

   Définition du type Condottiere
*/

#ifndef CONDOTTIERE_HPP
#define CONDOTTIERE_HPP

#include <string> // pour le type std::string

class Joueur;

class Condottiere{


	private :
		
		

	public :
		Condottiere();//constructeur de la classe Condottiere
		int recevoirRouge();
		int detruireQuartier(Joueur joueurD,Carte quartier);
		
};



/******************************************************************************/
#include "Condottiere.cpp"
#endif // CONDOTTIERE_HPP

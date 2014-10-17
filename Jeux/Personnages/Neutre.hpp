/*
   Fichier Neutre.hpp

   Définition du type Neutre
*/

#ifndef NEUTRE_HPP
#define NEUTRE_HPP

#include <string> // pour le type std::string

class Joueur;

class Neutre : public Personnage{


	private :
		ComportementcompIA
		

	public :
		Neutre();//constructeur de la classe Neutre
		int recevoirRouge();
		int detruireQuartier(Joueur joueurD,Carte quartier);
		
};



/******************************************************************************/
#include "Neutre.cpp"
#endif // NEUTRE_HPP

/*
   Fichier Pioche.hpp

   Définition du type Pioche
*/

#ifndef PIOCHE_HPP
#define PIOCHE_HPP

#include <vector>  //for std::vector
#include <algorithm> 
#include <string> // pour le type std::string

class Pioche{


	private :
		std::vector<Quartier> cartes;
		

		

	public :
		Pioche();//constructeur de la classe Pioche
		Carte[] piocherCarte(int nombre);
		void defausserCarte(Carte[]);
		
};



/******************************************************************************/
#include "Pioche.cpp"
#endif // PIOCHE_HPP

/**
*   Fichier ComportementIA.hpp
*   \brief Définition du type ComportementIA
*/

#ifndef COMPORTEMENTIA_HPP
#define COMPORTEMENTIA_HPP

#include <string> // pour le type std::string

#include "../../../ClassesUtiles/Aleatoire.cpp"

class ComportementIA{


	private :
		
		

	public :
		ComportementIA();//constructeur de la classe ComportementIA
		void jouer(Partie * p, Joueur * j);
		void choisirPersonnage(Partie * p, vector<Personnage*> persosDispo);
		void choisirGainTour(Joueur *j);
		
};



/******************************************************************************/
#include "ComportementIA.cpp"
#endif // COMPORTEMENTIA_HPP

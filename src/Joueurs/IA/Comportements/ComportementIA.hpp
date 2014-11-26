/**
*   Fichier ComportementIA.hpp
*   \brief Définition du type ComportementIA
*/

#ifndef COMPORTEMENTIA_HPP
#define COMPORTEMENTIA_HPP

#include <string> // pour le type std::string

class ComportementIA : public Comportement{


	private :
		
		

	public :
		ComportementIA();//constructeur de la classe ComportementIA
		void jouer(Partie * p, Joueur * j);
		void choisirPersonnage(Partie * p, vector<Personnage*> persosDispo,Joueur * j);
		void choisirGainTour(Joueur *j);
		void choisirConstruction(Joueur * j);
		
};



/******************************************************************************/
#include "ComportementIA.cpp"
#endif // COMPORTEMENTIA_HPP

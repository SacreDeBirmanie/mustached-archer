/*
   Fichier ComportementNeutreIA.hpp

   Définition du type ComportementNeutreIA
*/

#ifndef COMPORTEMENTNEUTREIA_HPP
#define COMPORTEMENTNEUTREIA_HPP

#include <string> // pour le type std::string

class ComportementNeutreIA{


	private :
		
		

	public :
		ComportementNeutreIA();//constructeur de la classe ComportementNeutreIA
		void jouer(Partie p, Joueur j);
		void choisirPersonnage(Partie p, vector<Personnage> persosDispo);
		
};



/******************************************************************************/
#include "ComportementNeutreIA.cpp"
#endif // COMPORTEMENTNEUTREIA_HPP

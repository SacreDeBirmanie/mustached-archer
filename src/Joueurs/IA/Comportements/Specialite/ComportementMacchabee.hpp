/*
   Fichier ComportementMacchabeeIA.hpp

   Définition du type ComportementMacchabeeIA
*/

#ifndef COMPORTEMENTMACCHABEEIA_HPP
#define COMPORTEMENTMACCHABEEIA_HPP

#include <string> // pour le type std::string

class ComportementMacchabeeIA{


	private :
		string personnage = "Kadoc";
		string joueur = "karadoc";
		boolean seDevoiler = false;
		

	public :
		ComportementMacchabeeIA();//constructeur de la classe ComportementMacchabeeIA
		int assassinat(string joueur, string personnage);
		void jouer(Partie p, Joueur j);
		Personnage choixAssassinat();
		
};



/******************************************************************************/
#include "ComportementMacchabeeIA.cpp"
#endif // COMPORTEMENTMACCHABEEIA_HPP

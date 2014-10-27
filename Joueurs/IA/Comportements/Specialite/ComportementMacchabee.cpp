/*
   Fichier ComportementMacchabeeIA.hpp

   Définition du type ComportementMacchabeeIA
*/

#ifndef COMPORTEMENTMACCHABEEIA_HPP
#define COMPORTEMENTMACCHABEEIA_HPP

#include <string> // pour le type std::string

class ComportementMacchabeeIA{


	private :
		
		

	public :
		ComportementMacchabeeIA();//constructeur de la classe ComportementMacchabeeIA
		void jouer(Partie p, Joueur j);//vide vu que le joueur passe son tour
		
};



/******************************************************************************/
#include "ComportementMacchabeeIA.cpp"
#endif // COMPORTEMENTMACCHABEEIA_HPP

/*
   Fichier Magicien.hpp

   Définition du type Magicien
*/

#ifndef MAGICIEN_HPP
#define MAGICIEN_HPP
s
#include <string> // pour le type std::string

class Magicien{


	private :

		

	public :
		Magicien();//constructeur de la classe Magicien
		void echangerMainContreJoueur(Joueur joueur);
		Carte[] echangerMaincontrePioche(Carte[] cartes, Joueur joueur);
		
};



/******************************************************************************/
#include "Magicien.cpp"
#endif // MAGICIEN_HPP
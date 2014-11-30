/*
   Fichier Magicien.hpp

   Définition du type Magicien
*/

#ifndef MAGICIEN_HPP
#define MAGICIEN_HPP

#include <string> // pour le type std::string

class Magicien : public Personnage{


	private :



	public :
		Magicien();//constructeur de la classe Magicien
		static void echangerMainContreJoueur(Joueur * joueur, Joueur* vole);
		static void echangerMaincontrePioche(vector<Quartier> cartes, Joueur* joueur);

};



/******************************************************************************/
#include "Magicien.cpp"
#endif // MAGICIEN_HPP

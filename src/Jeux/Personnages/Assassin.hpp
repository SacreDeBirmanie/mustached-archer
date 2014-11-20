/*
   Fichier Assassin.hpp

   Définition du type Assassin
*/

#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP

#include <string> // pour le type std::string
class Joueur;

class Assassin : public Personnage{

	private :
		int const ordre = 1;
		comportementIA comportementMacchabee = new comportementMacchabee();
		

	public :
		Assassin();//constructeur de la classe Assassin
		
		
};



/******************************************************************************/
#include "Assassin.cpp"
#endif // ASSASSIN_HPP

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
		
		

	public :
		Assassin();//constructeur de la classe Assassin
		void assassinner(Joueur joueur);//permet d'assassiner un joueur
		
};



/******************************************************************************/
#include "Assassin.cpp"
#endif // ASSASSIN_HPP

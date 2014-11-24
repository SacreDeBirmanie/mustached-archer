/**
*   Fichier Assassin.hpp
*   \brief Définition du type Assassin
*/

#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP

#include <string> // pour le type std::string
class Joueur;

class Assassin : public Personnage{

	private :
		int const ordre = 1;
		ComportementIA comportementAssassin = new ComportementAssassinIA();
		

	public :
		Assassin();//constructeur de la classe Assassin
		static void assassiner(Joueur *j);
		
		
};



/******************************************************************************/
#include "Assassin.cpp"
#endif // ASSASSIN_HPP

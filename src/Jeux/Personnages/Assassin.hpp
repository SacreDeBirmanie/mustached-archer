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
		static ComportementIA comportementAssassin = new ComportementAssassinIA();
		static ComportementIA comportementMaccahbee = new ComportementMaccahbeeIA();
		

	public :
		Assassin();//constructeur de la classe Assassin
		static void assassiner(Partie * partie,Joueur *j);
		
		
};



/******************************************************************************/
#include "Assassin.cpp"
#endif // ASSASSIN_HPP

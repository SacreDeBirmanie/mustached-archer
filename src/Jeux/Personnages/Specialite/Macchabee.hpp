/*
   Fichier Macchabee.hpp

   Définition du type Macchabee
*/

#ifndef MACCHABEE_HPP
#define MACCHABEE_HPP

#include <string> // pour le type std::string
class Joueur;

class Macchabee : public Personnage{

	private :
		string personnage_;
		ComportementIA comportementMacchabee_ = new ComportementMacchabee();
		

	public :
		Macchabee(string personnage);//constructeur de la classe Macchabee
		void jouer(Joueur * j);
		
		
};



/******************************************************************************/
#include "Macchabee.cpp"
#endif // MACCHABEE_HPP

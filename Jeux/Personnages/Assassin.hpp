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
		comportementIA comportementMacchabee = new comportementMacchabee();
		

	public :
		Macchabee();//constructeur de la classe Macchabee
		
		
};



/******************************************************************************/
#include "Macchabee.cpp"
#endif // MACCHABEE_HPP

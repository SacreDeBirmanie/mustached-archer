/*
   Fichier Macchabee.hpp

   Définition du type Macchabee
*/

#ifndef MACCHABEE_HPP
#define MACCHABEE_HPP

#include <string> // pour le type std::string
#include "../../../Joueurs/IA/Comportements/Specialite/ComportementMacchabeeIA.hpp"


class Macchabee : public Personnage{

	private:
		

	public :
		Macchabee();//constructeur de la classe Macchabee
		//void etreAssassine(Partie * p, Joueur * j);
		
		
};



/******************************************************************************/
#include "Macchabee.cpp"
#endif // MACCHABEE_HPP

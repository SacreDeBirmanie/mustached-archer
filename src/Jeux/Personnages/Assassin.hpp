/**
*   Fichier Assassin.hpp
*   \brief Définition du type Assassin
*/

#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP

#include <string> // pour le type std::string
#include "Specialite/Macchabee.hpp"
class Assassin : public Personnage{

	private :
		Personnage * macchabee_;

	public :
		Assassin();//constructeur de la classe Assassin
		static void assassiner(Partie * partie,Joueur *j);


};


#include "../../Joueurs/IA/Comportements/ComportementAssassinIA.hpp"
//#include "../../Joueurs/IA/Comportements/Specialite/ComportementMacchabeeIA.hpp"
/******************************************************************************/
#include "Assassin.cpp"
#endif // ASSASSIN_HPP

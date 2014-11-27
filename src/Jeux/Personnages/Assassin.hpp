/**
*   Fichier Assassin.hpp
*   \brief Définition du type Assassin
*/

#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP

#include "Specialite/Macchabee.hpp"
class Assassin : public Personnage{

	private :
		static Macchabee * macchabee_;

	public :
		Assassin();//constructeur de la classe Assassin
		static void assassiner(Partie * partie,Personnage* perso);


};

//#include "../../Joueurs/IA/Comportements/Specialite/ComportementMacchabeeIA.hpp"
/******************************************************************************/
#include "../../Joueurs/IA/Comportements/ComportementAssassinIA.hpp"
#include "Assassin.cpp"
#endif // ASSASSIN_HPP

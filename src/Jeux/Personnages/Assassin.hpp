/*!
* \file Assassin.hpp
* \brief Fichier contenant les entêtes de la classe Assassin
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP

#include "Specialite/Macchabee.hpp"

//--------------------------------------------------
/*!
* \class Assassin
* \brief Classe implémentant le personnage Assassin
*/
class Assassin : public Personnage{

	private :
		static Macchabee * macchabee_;//!< le personnage qu'il tue

	public :
		Assassin(string nom, int ordre, ComportementMachine* comp);//constructeur de la classe Assassin
		~Assassin();
		static void assassiner(Partie * partie,Personnage* perso);


};

/******************************************************************************/
#include "../../Joueurs/Machine/Comportements/ComportementAssassinMachine.hpp"
#include "Assassin.cpp"
#endif // ASSASSIN_HPP

/**
*   Fichier ComportementAssassinMachine.hpp
*   Définition du type ComportementAssassinMachine
*/

#ifndef COMPORTEMENTASSASSINMACHINE_HPP
#define COMPORTEMENTASSASSINMACHINE_HPP


class ComportementAssassinMachine : public ComportementMachine{


	private :
		
		

	public :
		ComportementAssassinMachine();//constructeur de la classe EtatAssassinMachine
		void jouer(Partie * p, Joueur * j);
		void choixAssassinat(Partie * p, Joueur * j);
		
};



/******************************************************************************/
#include "ComportementAssassinMachine.cpp"
#endif // COMPORTEMENTASSASSINMACHINE_HPP

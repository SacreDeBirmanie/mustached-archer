/**
*   Fichier ComportementMagicienMachine.hpp
*   Définition du type ComportementMagicienMachine
*/

#ifndef COMPORTEMENTMAGICIENMACHINE_HPP
#define COMPORTEMENTMAGICIENMACHINE_HPP


class ComportementMagicienMachine : public ComportementMachine{


	private :



	public :
		ComportementMagicienMachine();//constructeur de la classe EtatMagicienMachine
		void jouer(Partie * partie,Joueur * joueur);
		void choixPouvoir(Partie * partie, Joueur * joueur);


};



/******************************************************************************/
#include "ComportementMagicienMachine.cpp"
#endif // COMPORTEMENTMAGICIENMACHINE_HPP

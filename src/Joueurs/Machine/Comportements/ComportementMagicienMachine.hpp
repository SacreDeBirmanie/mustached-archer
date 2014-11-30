/**
*   Fichier ComportementMagicienMachine.hpp
*   Définition du type ComportementMagicienMachine
*/

#ifndef COMPORTEMENTMAGICIENMACHINE_HPP
#define COMPORTEMENTMAGICIENMACHINE_HPP

#include <string> // pour le type std::string

class ComportementMagicienMachine : public ComportementMachine{


	private :

		

	public :
		ComportementMagicienMachine();//constructeur de la classe EtatMagicienMachine
		void jouer(Partie * partie,Joueur * joueur);
		void choixPouvoir();
		
		
};



/******************************************************************************/
#include "ComportementMagicienMachine.cpp"
#endif // COMPORTEMENTMAGICIENMACHINE_HPP

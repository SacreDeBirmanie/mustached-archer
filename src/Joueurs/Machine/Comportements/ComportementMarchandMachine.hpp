/**
*   Fichier ComportementMarchandMachine.hpp
*   Définition du type ComportementMarchandMachine
*/

#ifndef COMPORTEMENTMARCHANDMACHINE_HPP
#define COMPORTEMENTMARCHANDMACHINE_HPP

#include <string> // pour le type std::string

class ComportementMarchandMachine : public ComportementMachine{


	private :

		

	public :
		ComportementMarchandMachine();//constructeur de la classe EtatMarchandMachine
		void jouer(Partie * p, Joueur * joueur);
		
};



/******************************************************************************/
#include "ComportementMarchandMachine.cpp"
#endif // COMPORTEMENTMARCHANDMACHINE_HPP

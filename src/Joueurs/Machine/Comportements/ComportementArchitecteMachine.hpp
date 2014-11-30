/**
*   Fichier ComportementArchitecteMachine.hpp
*	\brief Définition du type ComportementArchitecteMachine
*/

#ifndef COMPORTEMENTARCHITECTEMACHINE_HPP
#define COMPORTEMENTARCHITECTEMACHINE_HPP

#include <string> // pour le type std::string

class ComportementArchitecteMachine : public ComportementMachine{


	private :

		

	public :
		ComportementArchitecteMachine();//constructeur de la classe
		void jouer();
		
};



/******************************************************************************/
#include "ComportementArchitecteMachine.cpp"
#endif // COMPORTEMENTARCHITECTEMACHINE_HPP

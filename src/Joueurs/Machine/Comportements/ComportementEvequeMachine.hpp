/**
*   Fichier ComportementEvequeMachine.hpp
*	\brief Définition du type ComportementEvequeMachine
*/

#ifndef COMPORTEMENTEVEQUEMACHINE_HPP
#define COMPORTEMENTEVEQUEMACHINE_HPP

#include <string> // pour le type std::string

class ComportementEvequeMachine : public ComportementMachine{


	private :

		

	public :
		ComportementEvequeMachine();//constructeur de la classe
		void jouer();
		
};



/******************************************************************************/
#include "ComportementEvequeMachine.cpp"
#endif // COMPORTEMENTEVEQUEMachine

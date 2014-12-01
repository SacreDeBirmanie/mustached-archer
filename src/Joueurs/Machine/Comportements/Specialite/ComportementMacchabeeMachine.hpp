/**
*   \file ComportementMacchabeeMachine.hpp
*   \brief Définition du type ComportementMacchabeeMachine
*/

#ifndef COMPORTEMENTMACCHABEEMACHINE_HPP
#define COMPORTEMENTMACCHABEEMACHINE_HPP
class ComportementMacchabeeMachine : public ComportementMachine{

	public :
		ComportementMacchabeeMachine();
		void jouer(Partie * p,Joueur *j);

};

#include "ComportementMacchabeeMachine.cpp"
/******************************************************************************/
#endif // COMPORTEMENTMACCHABEEMACHINE_HPP

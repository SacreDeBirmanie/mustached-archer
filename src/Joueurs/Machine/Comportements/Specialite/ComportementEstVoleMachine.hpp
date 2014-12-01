/**
*   \file ComportementEstVoleMachine.hpp
*   \brief Définition du type ComportementEstVoleMachine
*/

#ifndef COMPORTEMENTESTVOLEMACHINE_HPP
#define COMPORTEMENTESTVOLEMACHINE_HPP
class Voleur;
class ComportementEstVoleMachine : public ComportementMachine{

	private :
	public :
		ComportementEstVoleMachine();//constructeur de la classe ComportementEstVoleMachine
		void jouer(Partie * partie, Joueur * joueur);


};

/******************************************************************************/

#endif // COMPORTEMENTESTVOLEMACHINE_HPP

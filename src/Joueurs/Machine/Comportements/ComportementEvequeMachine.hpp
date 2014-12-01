/*!
* \file ComportementEvequeMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementEvequeMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTEVEQUEMACHINE_HPP
#define COMPORTEMENTEVEQUEMACHINE_HPP

#include <string> // pour le type std::string

//--------------------------------------------------
/*!
* \class ComportementEvequeMachine
* \brief Classe gérant le comportement machine pour le perso eveque
*/
class ComportementEvequeMachine : public ComportementMachine{


	private :

		

	public :
		ComportementEvequeMachine();//constructeur de la classe
		~ComportementEvequeMachine();
		void jouer(Partie * p, Joueur * joueur);
		
};



/******************************************************************************/
#include "ComportementEvequeMachine.cpp"
#endif // COMPORTEMENTEVEQUEMachine

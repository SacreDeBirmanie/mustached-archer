/*!
* \file ComportementArchitecteMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementArchitecteMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/


#ifndef COMPORTEMENTARCHITECTEMACHINE_HPP
#define COMPORTEMENTARCHITECTEMACHINE_HPP

#include <string> // pour le type std::string

//--------------------------------------------------
/*!
* \class ComportementArchitecteMachine
* \brief Classe gérant le comportement machine pour le perso architecte
*/

class ComportementArchitecteMachine : public ComportementMachine{


	private :

		

	public :
		ComportementArchitecteMachine();//constructeur de la classe
		~ComportementArchitecteMachine();
		void jouer(Partie * partie, Joueur * joueur);
		
};



/******************************************************************************/
#include "ComportementArchitecteMachine.cpp"
#endif // COMPORTEMENTARCHITECTEMACHINE_HPP

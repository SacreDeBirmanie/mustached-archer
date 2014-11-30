/**
*   Fichier ComportementRoiMachine.hpp
*   \brief Définition du type ComportementRoiMachine
*/

#ifndef COMPORTEMENTROIMACHINE_HPP
#define COMPORTEMENTROIMACHINE_HPP

#include <string> // pour le type std::string

class ComportementRoiMachine : public ComportementMachine{


	private :

		

	public :
		ComportementRoiMachine();//constructeur de la classe EtatRoiMachine
		void jouer();
		
};



/******************************************************************************/
#include "ComportementRoiMachine.cpp"
#endif // COMPORTEMENTROIMACHINE_HPP

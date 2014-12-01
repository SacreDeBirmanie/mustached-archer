/*!
* \file ComportementRoiMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementRoiMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTROIMACHINE_HPP
#define COMPORTEMENTROIMACHINE_HPP

#include <string> // pour le type std::string

//--------------------------------------------------
/*!
* \class ComportementRoiMachine
* \brief Classe gérant le comportement machine du roi
*/
class ComportementRoiMachine : public ComportementMachine{


	private :

		

	public :
		ComportementRoiMachine();
		~ComportementRoiMachine();
		void jouer(Partie * partie, Joueur * joueur);
		
};



/******************************************************************************/
#include "ComportementRoiMachine.cpp"
#endif // COMPORTEMENTROIMACHINE_HPP

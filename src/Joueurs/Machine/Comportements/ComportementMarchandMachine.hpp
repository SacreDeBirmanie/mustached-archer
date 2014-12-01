/*!
* \file ComportementMarchandMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementMarchandMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTMARCHANDMACHINE_HPP
#define COMPORTEMENTMARCHANDMACHINE_HPP

#include <string> // pour le type std::string


//--------------------------------------------------
/*!
* \class ComportementMarchandMachine
* \brief Classe gérant le comportement machine du marchand
*/
class ComportementMarchandMachine : public ComportementMachine{


	private :

		

	public :
		ComportementMarchandMachine();
		~ComportementMarchandMachine();
		void jouer(Partie * p, Joueur * joueur);
		
};



/******************************************************************************/
#include "ComportementMarchandMachine.cpp"
#endif // COMPORTEMENTMARCHANDMACHINE_HPP

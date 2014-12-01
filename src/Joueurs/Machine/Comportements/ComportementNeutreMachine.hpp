/*!
* \file ComportementNeutreMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementNeutreMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTNEUTREMACHINE_HPP
#define COMPORTEMENTNEUTREMACHINE_HPP

#include <string> // pour le type std::string

//--------------------------------------------------
/*!
* \class ComportementNeutreMachine
* \brief Classe gérant le comportement machine neutre
*/
class ComportementNeutreMachine : public ComportementMachine{


	private :
		
		

	public :
		ComportementNeutreMachine();
		~ComportementNeutreMachine();
		void jouer(Partie p, Joueur j);
		void choisirPersonnage(Partie p, vector<Personnage> persosDispo);
		
};



/******************************************************************************/
#include "ComportementNeutreMachine.cpp"
#endif // COMPORTEMENTNEUTREMACHINE_HPP

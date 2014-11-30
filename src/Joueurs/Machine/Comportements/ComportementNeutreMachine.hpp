/**
*   Fichier ComportementNeutreMachine.hpp
*   \brief Définition du type ComportementNeutreMachine
*/

#ifndef COMPORTEMENTNEUTREMACHINE_HPP
#define COMPORTEMENTNEUTREMACHINE_HPP

#include <string> // pour le type std::string

class ComportementNeutreMachine : public ComportementMachine{


	private :
		
		

	public :
		ComportementNeutreMachine();//constructeur de la classe ComportementNeutreMachine
		void jouer(Partie p, Joueur j);
		void choisirPersonnage(Partie p, vector<Personnage> persosDispo);
		
};



/******************************************************************************/
#include "ComportementNeutreMachine.cpp"
#endif // COMPORTEMENTNEUTREMACHINE_HPP

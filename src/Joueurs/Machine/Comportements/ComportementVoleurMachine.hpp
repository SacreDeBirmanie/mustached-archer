/**
*   Fichier ComportementVoleurMachine.hpp
*   \brief Définition du type ComportementVoleurMachine
*/

#ifndef COMPORTEMENTVOLEURMACHINE_HPP
#define COMPORTEMENTVOLEURMACHINE_HPP

#include <string> // pour le type std::string

class ComportementVoleurMachine : public ComportementMachine{


	private :



	public :
		ComportementVoleurMachine();//constructeur de la classe EtatVoleurMachine
		void jouer(Partie * partie, Joueur * joueur);
		void choixVole(Partie * partie, Joueur * joueur);

};

/******************************************************************************/
#include "ComportementVoleurMachine.cpp"
#endif // COMPORTEMENTVOLEURMACHINE_HPP

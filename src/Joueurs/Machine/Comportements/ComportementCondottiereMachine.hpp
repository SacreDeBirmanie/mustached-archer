/**
*   Fichier ComportementCondottiere.hpp
*   \brief Définition du type ComportementCondottiere
*/

#ifndef COMPORTEMENTCONDOTTIEREMACHINE_HPP
#define COMPORTEMENTCONDOTTIEREMACHINE_HPP

#include <string> // pour le type std::string

class ComportementCondottiereMachine : public ComportementMachine{


	private :



	public :
		ComportementCondottiereMachine();//constructeur de la classe EtatCondottiere
		void jouer(Partie * partie, Joueur * joueur);
		void choixDestruction(Partie * partie , Joueur * joueur);

};



/******************************************************************************/
#include "ComportementCondottiereMachine.cpp"
#endif // COMPORTEMENTCONDOTTIEREMACHINE_HPP

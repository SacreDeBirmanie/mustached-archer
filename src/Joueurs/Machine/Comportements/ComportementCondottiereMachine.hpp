/**
*   Fichier ComportementCondottiere.hpp
*   \brief Définition du type ComportementCondottiere
*/

#ifndef COMPORTEMENTCONDOTTIEREMACHINE_HPP
#define COMPORTEMENTCONDOTTIEREMACHINE_HPP

#include <string> // pour le type std::string

class ComportementCondottiere : public ComportementMachine{


	private :

		

	public :
		ComportementCondottiere();//constructeur de la classe EtatCondottiere
		void jouer(Partie * partie, Joueur * joueur);
		void choixDestruction(partie * partie , Joueur * joueur);
		
};



/******************************************************************************/
#include "ComportementCondottiere.cpp"
#endif // COMPORTEMENTCONDOTTIEREMACHINE_HPP

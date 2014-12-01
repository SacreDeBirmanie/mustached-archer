/*!
* \file ComportementCondottiereMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementCondottiereMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/


#ifndef COMPORTEMENTCONDOTTIEREMACHINE_HPP
#define COMPORTEMENTCONDOTTIEREMACHINE_HPP

#include <string> // pour le type std::string

//--------------------------------------------------
/*!
* \class ComportementCondottiereMachine
* \brief Classe gérant le comportement machine pour le perso condottiere
*/
class ComportementCondottiereMachine : public ComportementMachine{


	private :



	public :
		ComportementCondottiereMachine();
		~ComportementCondottiereMachine();
		void jouer(Partie * partie, Joueur * joueur);
		void choixDestruction(Partie * partie , Joueur * joueur);

};



/******************************************************************************/
#include "ComportementCondottiereMachine.cpp"
#endif // COMPORTEMENTCONDOTTIEREMACHINE_HPP

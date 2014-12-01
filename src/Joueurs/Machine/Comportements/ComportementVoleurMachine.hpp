/*!
* \file ComportementVoleurMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementVoleurMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTVOLEURMACHINE_HPP
#define COMPORTEMENTVOLEURMACHINE_HPP

#include <string> // pour le type std::string

//--------------------------------------------------
/*!
* \class ComportementVoleurMachine
* \brief Classe gérant le comportement machine du voleur
*/
class ComportementVoleurMachine : public ComportementMachine{


	private :



	public :
		ComportementVoleurMachine();
		~ComportementVoleurMachine();
		void jouer(Partie * partie, Joueur * joueur);
		void choixVole(Partie * partie, Joueur * joueur);

};

/******************************************************************************/
#include "ComportementVoleurMachine.cpp"
#endif // COMPORTEMENTVOLEURMACHINE_HPP

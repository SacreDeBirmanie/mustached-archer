/*!
* \file ComportementMagicienMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementMagicienMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTMAGICIENMACHINE_HPP
#define COMPORTEMENTMAGICIENMACHINE_HPP

//--------------------------------------------------
/*!
* \class ComportementMagicienMachine
* \brief Classe gérant le comportement machine du magicien
*/
class ComportementMagicienMachine : public ComportementMachine{


	private :



	public :
		ComportementMagicienMachine();
		~ComportementMagicienMachine();
		void jouer(Partie * partie,Joueur * joueur);
		void choixPouvoir(Partie * partie, Joueur * joueur);


};



/******************************************************************************/
#include "ComportementMagicienMachine.cpp"
#endif // COMPORTEMENTMAGICIENMACHINE_HPP

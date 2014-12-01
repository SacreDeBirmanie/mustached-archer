/*!
* \file ComportementAssassinMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementAssassinMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTASSASSINMACHINE_HPP
#define COMPORTEMENTASSASSINMACHINE_HPP

//--------------------------------------------------
/*!
* \class ComportementAssassinMachine
* \brief Classe gérant le comportement machine pour le perso assassin
*/
class ComportementAssassinMachine : public ComportementMachine{


	private :
		
		

	public :
		ComportementAssassinMachine();
		~ComportementAssassinMachine();
		void jouer(Partie * p, Joueur * j);
		void choixAssassinat(Partie * p, Joueur * j);
		
};



/******************************************************************************/
#include "ComportementAssassinMachine.cpp"
#endif // COMPORTEMENTASSASSINMACHINE_HPP

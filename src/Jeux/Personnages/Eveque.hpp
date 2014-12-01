/*!
* \file Eveque.hpp
* \brief Fichier contenant les entêtes de la classe Eveque
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef EVEQUE_HPP
#define EVEQUE_HPP

//--------------------------------------------------
/*!
* \class Eveque
* \brief Classe implémentant le personnage Eveque
*/
class Eveque : public Personnage{


	private :

		

	public :
		Eveque(string nom, int ordre, ComportementMachine * comp);
		~Eveque();
		static void capacite(Joueur* joueur);
};



#include "../../Joueurs/Machine/Comportements/ComportementEvequeMachine.hpp"
/******************************************************************************/
#include "Eveque.cpp"
#endif // EVEQUE_HPP



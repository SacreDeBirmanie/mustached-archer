/*!
* \file Architecte.hpp
* \brief Fichier contenant les entêtes de la classe Architecte
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef ARCHITECTE_HPP
#define ARCHITECTE_HPP

//--------------------------------------------------
/*!
* \class Architecte
* \brief Classe implémentant le personnage architecte
*/
class Architecte : public Personnage{


	private :

		

	public :
		Architecte(string nom, int ordre, ComportementMachine * comp);
		~Architecte();
		static void capacite(Joueur* joueur);
};


#include "../../Joueurs/Machine/Comportements/ComportementArchitecteMachine.hpp"
/******************************************************************************/
#include "Architecte.cpp"
#endif // ARCHITECTE_HPP




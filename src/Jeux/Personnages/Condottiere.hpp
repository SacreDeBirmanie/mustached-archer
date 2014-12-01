/*!
* \file Condottiere.hpp
* \brief Fichier contenant les entêtes de la classe Condottiere
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef CONDOTTIERE_HPP
#define CONDOTTIERE_HPP

//--------------------------------------------------
/*!
* \class Condottiere
* \brief Classe implémentant le personnage Condottiere
*/
class Condottiere : public Personnage{


	private :


	public :
		Condottiere(string nom, int ordre, ComportementMachine* comp);//constructeur de la classe Condottiere
		~Condottiere();
		static void capacite(Joueur* joueur);
		static bool destruction(Joueur * condo, Joueur * cible, Quartier * quartier);

};



#include "../../Joueurs/Machine/Comportements/ComportementCondottiereMachine.hpp"
/******************************************************************************/
#include "Condottiere.cpp"
#endif // CONDOTTIERE_HPP

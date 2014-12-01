/*!
* \file Comportement.hpp
* \brief Fichier contenant les entêtes de la classe Comportement
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENT_HPP
#define COMPORTEMENT_HPP

//--------------------------------------------------
/*!
* \class Comportement
* \brief Classe gérant les comportements des joueurs
*/
class Comportement{
    public :
		Comportement();
		~Comportement();
		virtual void jouer(Partie * p,Joueur *j) = 0;
		void choisirPersonnage(Partie * p, vector<Personnage*> persosDispo,Joueur * j);
		void choisirGainTour(Joueur * j);
		void choisirConstruction(Joueur * j);

};

#include "Comportement.cpp"
#endif // COMPORTEMENT_HPP

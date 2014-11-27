/**
*   Fichier ComportementIA.hpp
*   \brief Définition du type ComportementIA
*/

#ifndef COMPORTEMENTIA_HPP
#define COMPORTEMENTIA_HPP

#include <string> // pour le type std::string

class ComportementIA : public Comportement{


	private :



	public :
		ComportementIA();//constructeur de la classe ComportementIA
		void jouer(Partie * p, Joueur * j);
		
	protected :
		void choisirPersonnage(Partie * p, vector<Personnage*> persosDispo,Joueur * j);
		void choisirGainTour(Joueur *j);
		void choisirConstruction(Joueur * j);

};

/******************************************************************************/
#endif // COMPORTEMENTIA_HPP

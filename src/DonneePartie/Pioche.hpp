/**
*   Fichier Pioche.hpp
*   \brief Définition du type Pioche
*/

#ifndef PIOCHE_HPP
#define PIOCHE_HPP

#include <algorithm>

class Pioche{


	private :
		vector<Quartier*> cartes;
		int reserveOr;




	public :
		Pioche(int limiteOr);//constructeur de la classe Pioche
		void ajouterCarte(Quartier *carte);
		vector<Quartier*> piocher(int nombre);
		void defausserCarte(vector<Quartier>);
		int prendrePiece(int nombre);

};



/******************************************************************************/
#include "Pioche.cpp"
#endif // PIOCHE_HPP

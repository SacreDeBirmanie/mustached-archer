/*!
* \file Pioche.hpp
* \brief Fichier contenant les entêtes de la classe Pioche
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef PIOCHE_HPP
#define PIOCHE_HPP

#include <algorithm>

class Pioche{


	private :
		vector<Quartier*> cartes;//!< la pioche de cartes
		int reserveOr;//!< la banque




	public :
		Pioche(int limiteOr);
		~Pioche();
		void ajouterCarte(Quartier *carte);
		vector<Quartier*> piocher(int nombre);
		void defausserCarte(vector<Quartier>);
		int prendrePiece(int nombre);

};



/******************************************************************************/
#include "Pioche.cpp"
#endif // PIOCHE_HPP

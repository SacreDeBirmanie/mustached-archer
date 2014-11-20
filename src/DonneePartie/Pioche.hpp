/**
*   Fichier Pioche.hpp
*   \brief Définition du type Pioche
*/

#ifndef PIOCHE_HPP
#define PIOCHE_HPP

#include <vector>  //for std::vector
#include <algorithm> 
#include <string> // pour le type std::string

class Pioche{


	private :
		vector<Quartier*> * cartes = new vector<Quartier*>;
		int reserveOr;
		

		

	public :
		Pioche(int limiteOr);//constructeur de la classe Pioche
		void ajouterCarte(Quartier *carte);
		vector<Quartier> piocherCarte(int nombre);
		void defausserCarte(vector<Quartier>);
		int prendrePiece(int nombre);
		
};



/******************************************************************************/
#include "Pioche.cpp"
#endif // PIOCHE_HPP

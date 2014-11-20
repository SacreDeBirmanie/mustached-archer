/**
*   Fichier ComportementMagicienIA.hpp
*   Définition du type ComportementMagicienIA
*/

#ifndef ETATMAGICIENIA_HPP
#define ETATMAGICIENIA_HPP

#include <string> // pour le type std::string

class ComportementMagicienIA : public ComportementIA{


	private :

		

	public :
		ComportementMagicienIA();//constructeur de la classe EtatMagicienIA
		void jouer();
		void choixPouvoir();
		Joueur choixEchangeJoueurs();
		Carte[] choix!echangePioche();
		
		
};



/******************************************************************************/
#include "ComportementMagicienIA.cpp"
#endif // ETATMAGICIENIA_HPP

/*
   Fichier EtatMagicienIA.hpp

   Définition du type EtatMagicienIA
*/

#ifndef ETATMAGICIENIA_HPP
#define ETATMAGICIENIA_HPP

#include <string> // pour le type std::string

class EtatMagicienIA{


	private :

		

	public :
		EtatMagicienIA();//constructeur de la classe EtatMagicienIA
		void jouer();
		void choixPouvoir();
		Joueur choixEchangeJoueurs();
		Carte[] choix!echangePioche();
		
		
};



/******************************************************************************/
#include "EtatMagicienIA.cpp"
#endif // ETATMAGICIENIA_HPP

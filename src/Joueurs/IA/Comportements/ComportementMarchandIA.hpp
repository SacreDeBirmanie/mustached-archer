/**
*   Fichier ComportementMarchandIA.hpp
*   Définition du type ComportementMarchandIA
*/

#ifndef ETATMARCHANDIA_HPP
#define ETATMARCHANDIA_HPP

#include <string> // pour le type std::string

class ComportementMarchandIA : public ComportementIA{


	private :

		

	public :
		ComportementMarchandIA();//constructeur de la classe EtatMarchandIA
		void jouer(Partie * p, Joueur * joueur);
		
};



/******************************************************************************/
#include "ComportementMarchandIA.cpp"
#endif // ETATMARCHANDIA_HPP

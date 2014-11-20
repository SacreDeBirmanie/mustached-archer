/**
*   Fichier ComportementIA.hpp
*   \brief Définition du type ComportementIA
*/

#ifndef COMPORTEMENTIA_HPP
#define COMPORTEMENTIA_HPP

#include <string> // pour le type std::string

class ComportementIA{


	public :
		ComportementIA();//constructeur de la classe ComportementIA
		virtual void jouer() = 0;
		
};

/******************************************************************************/
#include "ComportementIA.cpp"
#endif // COMPORTEMENTIA_HPP

/**
*   Fichier ComportementIA.hpp
*   \brief D�finition du type ComportementIA
*/

#ifndef COMPORTEMENTMACCHABEEIA_HPP
#define COMPORTEMENTMACCHABEEIA_HPP
class ComportementMacchabeeIA : public ComportementIA{

	public :
		ComportementMacchabeeIA();
		void jouer(Partie * p,Joueur *j);

};

#include "ComportementMacchabeeIA.cpp"
/******************************************************************************/
#endif // COMPORTEMENTMACCHABEEIA_HPP

/*
   Fichier IA.hpp

   Définition du type IA
*/

#ifndef IA_HPP
#define IA_HPP
class IA : public Joueur{


	private :

	public :
		IA(string pseudo,Partie * partie);
		void setComportement(Personnage *p);
		void jouer();
};



/******************************************************************************/
#include "IA.cpp"
#endif // IA_HPP

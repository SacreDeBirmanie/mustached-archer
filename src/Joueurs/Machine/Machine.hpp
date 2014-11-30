/*
   Fichier Machine.hpp

   Définition du type Machine
*/

#ifndef MACHINE_HPP
#define MACHINE_HPP
class Machine : public Joueur{


	private :

	public :
		Machine(string pseudo,Partie * partie);
		void setComportement(Personnage *p);
		void jouer();
};



/******************************************************************************/
#include "Machine.cpp"
#endif // MACHINE_HPP

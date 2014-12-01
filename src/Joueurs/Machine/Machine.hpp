/*!
* \file Machine.hpp
* \brief Fichier contenant les entêtes de la classe Machine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef MACHINE_HPP
#define MACHINE_HPP

//--------------------------------------------------
/*!
* \class Machine
* \brief Classe gérant les comportements des machines
*/
class Machine : public Joueur{


	private :

	public :
		Machine(string pseudo,Partie * partie);
		~Machine();
		void setComportement(Personnage *p);
		void choisirPersonnage(vector<Personnage*> persosDispo);
		void jouer();
};



/******************************************************************************/
#include "Machine.cpp"
#endif // MACHINE_HPP

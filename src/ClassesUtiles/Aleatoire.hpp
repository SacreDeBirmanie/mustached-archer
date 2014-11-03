/** \file Aleatoire.hpp
* \bref Définition du type Aleatoire
* 
* Classe abstraite qui définit la classe Aleatoire
*/

#ifndef ALEATOIRE_HPP
#define ALEATOIRE_HPP


class Aleatoire{


	protected :	
		
		

	public :
		//! Le constructeur
		virtual Aleatoire();
		int tirerEntier(int minimum=0,int maximum=32767);
		
};



/******************************************************************************/
#include "Aleatoire.cpp"
#endif // ALEATOIRE_HPP

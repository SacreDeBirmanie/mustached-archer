/*!
 * \file Quartier.hpp
 * \brief Définition de la classe quartier
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef QUARTIER_HPP
#define QUARTIER_HPP

#include <string> // pour le type std::string

#define MERVEILLE 0
#define MARCHAND  1
#define RELIGIEUX  2
#define NOBLE  3
#define MILITAIRE  4

class Quartier{


	protected :
		string nom_;
		int type_;
		int cout_;
		

		

	public :
		Quartier(string nom,int type,int cout);
		~Quartier();
		string getNom();
		int getCout();
		int getType();		
		bool estMarchand();
		bool estReligieux();
		bool estNoble();
		bool estMilitaire();
		
};


#include "Quartier.cpp"
#endif // QUARTIER_HPP

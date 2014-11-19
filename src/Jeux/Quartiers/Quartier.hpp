/*!
 * \file Quartier.hpp
 * \brief Définition de la classe quartier
 * \author François Hallereau & Sébastien Vallée
 */

#ifndef QUARTIER_HPP
#define QUARTIER_HPP

#include <string> // pour le type std::string

#define MARCHAND  1
#define RELIGIEUX  2
#define NOBLE  3
#define MILITAIRE  4

class Quartier{


	protected :
		string nom;
		int type;
		int cout;
		

		

	public :
		Quartier(string nom,int type,int cout);
		~Quartier();
		string getNom();
		int getCout();		
		bool estMarchand();
		bool estReligieux();
		bool estNoble();
		bool estMilitaire();
		
};


#include "Quartier.cpp"
#endif // QUARTIER_HPP

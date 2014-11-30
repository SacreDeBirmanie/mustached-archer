/*!
* \file Quartier.hpp
* \brief Fichier contenant les entêtes de la classe Quartier
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef QUARTIER_HPP
#define QUARTIER_HPP

#define MERVEILLE 0
#define MARCHAND  1
#define RELIGIEUX  2
#define NOBLE  3
#define MILITAIRE  4

//--------------------------------------------------
/*!
* \class Quartier
* \brief Classe implémentant les quartiers
*/

class Quartier{


	protected :
		string nom_;//!< le nom du quartier
		int type_;//!< le type du quartier
		int cout_;//!< le cout du quartier




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

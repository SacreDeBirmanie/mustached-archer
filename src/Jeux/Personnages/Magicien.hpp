/*!
* \file Magicien.hpp
* \brief Fichier contenant les entêtes de la classe Magicien
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef MAGICIEN_HPP
#define MAGICIEN_HPP

//--------------------------------------------------
/*!
* \class Magicien
* \brief Classe implémentant le personnage Magicien
*/
class Magicien : public Personnage{


	private :



	public :
		Magicien(string nom, int ordre, ComportementMachine* comp);//constructeur de la classe Magicien
		~Magicien();
		static void echangerMainContreJoueur(Joueur * joueur, Joueur* vole);
		static void echangerMainContrePioche(vector<Quartier*> cartes, Joueur* joueur);

};


#include "../../Joueurs/Machine/Comportements/ComportementMagicienMachine.hpp"
/******************************************************************************/
#include "Magicien.cpp"
#endif // MAGICIEN_HPP

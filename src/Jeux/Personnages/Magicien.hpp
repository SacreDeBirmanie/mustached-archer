/*
   Fichier Magicien.hpp

   Définition du type Magicien
*/

#ifndef MAGICIEN_HPP
#define MAGICIEN_HPP

class Magicien : public Personnage{


	private :



	public :
		Magicien(string nom, int ordre, ComportementMachine* comp);//constructeur de la classe Magicien
		static void echangerMainContreJoueur(Joueur * joueur, Joueur* vole);
		static void echangerMainContrePioche(vector<Quartier*> cartes, Joueur* joueur);

};


#include "../../Joueurs/Machine/Comportements/ComportementMagicienMachine.hpp"
/******************************************************************************/
#include "Magicien.cpp"
#endif // MAGICIEN_HPP

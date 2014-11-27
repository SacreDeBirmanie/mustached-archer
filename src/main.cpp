/** \file main.cpp
* \bref classe principale
*/
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
//Autorise la creation de quartiers
#include "DonneePartie/Partie.hpp"

#include "Jeux/Personnages/Assassin.hpp"
//#include "Jeux/Personnages/Marchand.hpp"
//#include "Jeux/Personnages/Condottiere.hpp"
//#include "Jeux/Personnages/Magicien.hpp"


int main(){

	Pioche *pioche =  new Pioche();



	Partie * partie = new Partie(pioche);

	partie->nouveauJoueur(new IA("A",partie));
	partie->nouveauJoueur(new IA("B",partie));
	partie->nouveauJoueur(new IA("C",partie));
	partie->nouveauJoueur(new IA("D",partie));

	partie->nouveauPersonnage(new Assassin());
	//partie->nouveauPersonnage(new Marchand());
	//partie.nouveauPersonnage(new Condottiere());
	//partie.nouveauPersonnage(new Magicien());

	//partie.debuterLeJeu();

	return EXIT_SUCCESS;
}

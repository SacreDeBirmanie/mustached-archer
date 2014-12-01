/** \file main.cpp
* \bref classe principale
*/
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
//Autorise la creation de quartiers
#include "DonneePartie/Partie.hpp"
#include "DonneePartie/FabriquePersonnage.hpp"


int main(){

	Pioche *pioche =  new Pioche();

    Partie * partie = new Partie(pioche);

    FabriquePersonnage * fabrique = new FabriquePersonnage();

    Machine * Machine1 = new Machine("A",partie);
    Machine * Machine2 = new Machine("B",partie);
    Machine * Machine3 = new Machine("C",partie);
    Machine * Machine4 = new Machine("D",partie);


	partie->nouveauJoueur(Machine1);
	partie->nouveauJoueur(Machine2);
	partie->nouveauJoueur(Machine3);
	partie->nouveauJoueur(Machine4);

	partie->nouveauPersonnage(fabrique->creerAssassin());
	partie->nouveauPersonnage(fabrique->creerCondottiere());
	partie->nouveauPersonnage(fabrique->creerMagicien());
	partie->nouveauPersonnage(fabrique->creerVoleur());
	partie->nouveauPersonnage(fabrique->creerRoi());

	partie->debuterLeJeu();

	return EXIT_SUCCESS;
}

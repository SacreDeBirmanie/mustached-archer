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

	partie->nouveauJoueur(new Machine("A",partie));
	partie->nouveauJoueur(new Machine("B",partie));
	partie->nouveauJoueur(new Machine("C",partie));
	partie->nouveauJoueur(new Machine("D",partie));

	partie->nouveauPersonnage(fabrique->creerAssassin());
	partie->nouveauPersonnage(fabrique->creerCondottiere());
	partie->nouveauPersonnage(fabrique->creerMagicien());
	partie->nouveauPersonnage(fabrique->creerVoleur());
	partie->nouveauPersonnage(fabrique->creerRoi());

	partie->debuterLeJeu();

	return EXIT_SUCCESS;
}

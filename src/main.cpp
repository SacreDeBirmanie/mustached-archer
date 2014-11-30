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

#include "Jeux/Personnages/Assassin.hpp"
#include "Jeux/Personnages/Marchand.hpp"
#include "Jeux/Personnages/Condottiere.hpp"
#include "Jeux/Personnages/Magicien.hpp"
#include "Jeux/Personnages/Voleur.hpp"

int main(){

	Pioche *pioche =  new Pioche();

    Partie * partie = new Partie(pioche);

    FabriquePersonnage * fabrique = new FabriquePersonnage();

	partie->nouveauJoueur(new Machine("A",partie));
	partie->nouveauJoueur(new Machine("B",partie));
	partie->nouveauJoueur(new Machine("C",partie));
	partie->nouveauJoueur(new Machine("D",partie));

	partie->nouveauPersonnage(fabrique->creerAssassin());
	partie->nouveauPersonnage(fabrique->creerAssassin());
	partie->nouveauPersonnage(fabrique->creerAssassin());
	partie->nouveauPersonnage(fabrique->creerAssassin());
	partie->nouveauPersonnage(fabrique->creerAssassin());

	partie->debuterLeJeu();

	return EXIT_SUCCESS;
}

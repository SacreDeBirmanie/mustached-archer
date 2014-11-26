/** \file main.cpp
* \bref classe principale
*/
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
//Autorise la creation de quartiers
#include "ClassesUtiles/Aleatoire.cpp"
#include "ClassesUtiles/listeChainee.cpp"

#include "Jeux/Quartiers/Quartier.hpp"
#include "DonneePartie/Observer.hpp"
#include "Jeux/Cite/Observable.hpp"
#include "Jeux/Cite/Cite.hpp"

#include "DonneePartie/Pioche.hpp"

#include "DonneePartie/AssociationPersonnageJoueur.hpp"
#include "Joueurs/Joueur.hpp"
#include "Jeux/Personnages/Personnage.hpp"
#include "Joueurs/Comportement.hpp"
#include "DonneePartie/Partie.hpp"

#include "DonneePartie/AssociationPersonnageJoueur.cpp"
#include "Joueurs/Joueur.hpp"
#include "Jeux/Personnages/Personnage.hpp"

//On ne doit inclure que les personnages a fortiori
//#include "Joueurs/IA/Comportements/ComportementIA.hpp"
//#include "Joueurs/IA/Comportements/ComportementAssassinIA.hpp"
//#include "Joueurs/IA/Comportements/ComportementMarchandIA.hpp"
//Autorise la creation des personnages de la liste
#include "Jeux/Personnages/Personnage.hpp"
#include "Jeux/Personnages/Assassin.hpp"
#include "Jeux/Personnages/Marchand.hpp"
//#include "Jeux/Personnages/Condottiere.hpp"
//#include "Jeux/Personnages/Magicien.hpp"

//Pensez à mettre tous les includes dans partie.hpp plutôt que dans le main !!!

#include "DonneePartie/Partie.hpp"



int main(){

	Pioche *pioche =  new Pioche();



	Partie * partie = new Partie(const &pioche);

	partie->nouveauJoueur(new IA("A"));
	partie->nouveauJoueur(new IA("B"));
	partie->nouveauJoueur(new IA("C"));
	partie->nouveauJoueur(new IA("D"));

	partie->nouveauPersonnage(new Assassin());
	partie->nouveauPersonnage(new Marchand());
	//partie.nouveauPersonnage(new Condottiere());
	//partie.nouveauPersonnage(new Magicien());

	//partie.debuterLeJeu();

	return EXIT_SUCCESS;
}

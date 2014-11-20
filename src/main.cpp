/** \file main.cpp
* \bref classe principale
*/
#include <cstdlib>
#include <cstdio>
#include <vector>  
#include <string> 
using namespace std;
//Autorise la creation de quartiers
#include "Jeux/Quartiers/Quartier.hpp"

//Autorise la creation des personnages de la liste
#include "Jeux/Personnages/Personnage.hpp"
#include "Jeux/Personnages/Assassin.hpp"
#include "Jeux/Personnages/Marchand.hpp"
//#include "Jeux/Personnages/Condottiere.hpp"
//#include "Jeux/Personnages/Magicien.hpp"

//Autorise la partie, la pioche et l'association
#include "DonneePartie/*.hpp"

int main(){
	
	Pioche *pioche =  new Pioche();
	
	
	
	Partie * partie = new Partie(*pioche);
	
	partie.nouveauJoueur(new IA("A"));
	partie.nouveaJoueur(new IA("B"));
	partie.nouveauJoueur(new IA("C"));
	partie.nouveauJoueur(new IA("D"));
	
	partie.nouveauPersonnage(new Assassin());
	partie.nouveauPersonnage(new Marchand());
	//partie.nouveauPersonnage(new Condottiere());
	//partie.nouveauPersonnage(new Magicien());
	
	//partie.debuterLeJeu();
	
	return EXIT_SUCCESS;
}

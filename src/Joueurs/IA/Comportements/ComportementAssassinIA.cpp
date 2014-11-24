/**
*   Fichier ComportementAssassinIA.hpp
*/

ComportementAssassinIA::ComportementAssassinIA(){}

void ComportementAssassinIA::jouer(Partie *p, Joueur *j){
	j->choisirGainTour(j);
	assassiner(choixAssassinat(p, j));
	choisirConstruction(j);
	

}

Personnage ComportementAssassinIA::choixAssassinat(Partie *p, Joueur *j){
	
}

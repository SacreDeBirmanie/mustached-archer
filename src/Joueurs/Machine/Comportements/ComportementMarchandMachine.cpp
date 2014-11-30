/**
*   Fichier ComportementMarchandMachine.cpp
*/

ComportementMarchandMachine::ComportementMarchandMachine(){}

void ComportementMarchandMachine::jouer(Partie * p, Joueur * joueur){
	choisirGainTour(j);
	Marchand::capacite(joueur);
	choisirConstruction(j);
}

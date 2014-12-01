/**
*   Fichier ComportementMarchandMachine.cpp
*/

ComportementMarchandMachine::ComportementMarchandMachine():ComportementMachine(){}

void ComportementMarchandMachine::jouer(Partie * partie, Joueur * joueur){
	choisirGainTour(joueur);
	Marchand::capacite(joueur);
	choisirConstruction(joueur);
}

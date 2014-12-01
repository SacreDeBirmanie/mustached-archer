ComportementArchitecteMachine::ComportementArchitecteMachine():ComportementMachine(){

}

void ComportementArchitecteMachine::jouer(Partie * partie, Joueur * joueur){
	Architecte::capacite(joueur);
	choisirGainTour(joueur);
	choisirConstruction(joueur);
	choisirConstruction(joueur);
	choisirConstruction(joueur);
}
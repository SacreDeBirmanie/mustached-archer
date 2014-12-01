ComportementEvequeMachine::ComportementEvequeMachine():ComportementMachine(){

}

void ComportementEvequeMachine::jouer(Partie * p, Joueur * joueur){
	Eveque::capacite(joueur);
	choisirGainTour(joueur);
	choisirConstruction(joueur);
}
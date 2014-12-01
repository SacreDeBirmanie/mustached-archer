ComportementRoiMachine::ComportementRoiMachine():ComportementMachine(){

}

void ComportementRoiMachine::jouer(Partie * partie, Joueur * joueur){
	Roi::capacite(partie,joueur);
	choisirGainTour(joueur);
	choisirConstruction(joueur);
}

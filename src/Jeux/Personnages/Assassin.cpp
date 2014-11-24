Assassin::Assassin(): comportementIA(new comportementAssassinIA()), nom("Assassin"), numero(1), maccahbee(new Macchabee()) {


}

void Assassin::assassiner(Partie * partie, Joueur * j){
	partie->modifierOrdreJoueur(j);
	j->setComportement(Maccahbee);

}


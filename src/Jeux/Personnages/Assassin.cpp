Assassin::Assassin(): comportementIA(new comportementAssassinIA()), nom_("Assassin"), numero_(1), maccahbee_(new Macchabee()) {


}

void Assassin::assassiner(Partie * partie, Joueur * j){
	partie->modifierOrdreJoueur(j);
	j->setComportement(macchabee);

}


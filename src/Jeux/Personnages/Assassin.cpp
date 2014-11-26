Assassin::Assassin(): comportementIA_(new comportementAssassinIA()), nom_("Assassin"), numero_(1), macchabee_(new Macchabee()) {}

void Assassin::assassiner(Partie * partie, Joueur * j){
	partie->modifierOrdreJoueur(j);
	j->setComportement(macchabee_);
}


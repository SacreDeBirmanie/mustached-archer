Assassin::Assassin(): Personnage("Assassin",1,new ComportementAssassinIA()), macchabee_(new Macchabee()) {}

void Assassin::assassiner(Partie * partie, Joueur * j){
	partie->modifierOrdreJoueur(j);
	j->setComportement(macchabee_);
}


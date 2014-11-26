Assassin::Assassin(): Personnage("Assassin",1,new ComportementAssassinIA()) {}

void Assassin::assassiner(Partie * partie, Personnage * perso){
    Joueur * joueur = partie->retrouverJ(perso);
	partie->modifierOrdreJoueur(joueur);
	joueur->setComportement(macchabee_);
}


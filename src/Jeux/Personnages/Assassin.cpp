Macchabee* Assassin::macchabee_ = new Macchabee();
Assassin::Assassin(string nom, int ordre, ComportementMachine * comp):Personnage(nom,ordre,comp){

}

void Assassin::assassiner(Partie * partie, Personnage * perso){
    Joueur * joueur = partie->retrouverJ(perso);
	partie->modifierOrdreJoueur(joueur);
	joueur->setComportement(Assassin::macchabee_);
}


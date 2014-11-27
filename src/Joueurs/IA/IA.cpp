IA::IA(string pseudo,Partie * partie) : Joueur(pseudo,partie){

}

void IA::setComportement(Personnage *p){
	comportement_ = p->getComportementIA();
}

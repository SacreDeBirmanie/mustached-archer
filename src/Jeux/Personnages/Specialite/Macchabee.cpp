Macchabee::Macchabee(string personnage):personnage_(personnage){}

void Macchabee::jouer(Joueur * j){
	cout<<j->getPseudo()<<" etait le personnage "<< personnage_ << " assassine !"<<endl;

}

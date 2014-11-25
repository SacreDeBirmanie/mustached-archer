Macchabee::Macchabee(string personnage)::personnage_(personnage){}
void jouer(Joueur * j){
	cout<<j->getPseudo()<<" etait le personnage "<< personnage_ << " assassine !"<<endl;

}

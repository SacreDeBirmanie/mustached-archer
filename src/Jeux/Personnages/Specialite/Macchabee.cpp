Macchabee::Macchabee(string personnage):personnage_(personnage), comportementMacchabeeIA_(new ComportementMacchabeeIA()){}

void Macchabee::jouer(Joueur * j){
	cout<<j->getPseudo()<<" etait le personnage "<< personnage_ << " assassine !"<<endl;

}

Magicien::Magicien(string nom, int ordre, ComportementMachine* comp): Personnage(nom,ordre, comp){

}

void Magicien::echangerMainContreJoueur(Joueur* magicien,Joueur* vole){
	vector<Quartier*> tmp = vole->getMain();
	vole->setMain(magicien->getMain());
	magicien->setMain(tmp);
}


void Magicien::echangerMainContrePioche(vector<Quartier*> cartes, Joueur* joueur){
	int n = cartes.size();
	joueur->defausser(cartes);
	joueur->piocher(n);
}

void Magicien::echangerMainContreJoueur(Joueur* magicien,Joueur* vole){
	vector<Quartier*> tmp = vole->getMain();
	vole->setMain(magicien->getMain());
	magicien->setMain(tmp);	
}


void echangerMaincontrePioche(vector<Quartier> cartes, Joueur* joueur){}

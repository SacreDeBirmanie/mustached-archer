Pioche::Pioche(int limiteOr=30) : reserveOr(limiteOr){

}

void Pioche::ajouterCarte(Quartier *carte){
	cartes.push_back(carte);
	}

vector<Quartier*> Pioche::piocher(int nombre){
	vector<Quartier*> tmp;
	for(int i =0; i<nombre;i++){
		tmp.push_back(this->cartes.front());
		this->cartes.erase(this->cartes.begin());//supprime le premier élément
	}
	return tmp;
}

void Pioche::defausserCarte(vector<Quartier> q){
	for ( vector<Quartier>::iterator iter = q.begin(); iter != q.end(); iter++ ){
		this->cartes.push_back(&*iter);
	}
}

int Pioche::prendrePiece(int nombre){
	if(this->reserveOr-nombre>=0){
		this->reserveOr = this->reserveOr-nombre;
		return nombre;
	}
	else{
		int tmp = this->reserveOr;
		this->reserveOr=0;
		return tmp;
	}
}

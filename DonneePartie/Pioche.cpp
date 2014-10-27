Pioche::Pioche(){

}

vector<Quartier> Pioche::piocherCarte(int nombre){
	vector<Quartier> tmp;
	for(int i =0; i<nombre;i++){
		tmp.push_back(this->cartes.front());
		this->cartes.pop_front();
	}
}

void Pioche::defausserCarte(vector<Quartier> q){
	for ( vector<Joueur>::iterator iter = q.begin(); iter != q.end(); iter++ ){
		this->cartes.push_back(*iter);
	}
}

int prendrePiece(int nombre){
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
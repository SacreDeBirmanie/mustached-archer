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
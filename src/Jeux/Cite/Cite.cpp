Cite::Cite(){}

int Cite::valeur(){
	int val =0;
	if(!quartiers.empty()){
		for(vector<Quartier*>::iterator quartier=quartiers.begin();quartier!=quartiers.end();++quartier){
			val+=(*quartier)->getCout();
		}
	}
	return val;	
}

bool Cite::estPresent(Quartier* q){
	if(quartiers.empty()){
		for(vector<Quartier*>::iterator quartier=quartiers.begin();quartier!=quartiers.end();++quartier){
			if(((*quartier)->getNom()).compare(q->getNom())==0){
				return true;
			}
		}
	}
	return false;
}

bool Cite::ajouterQuartier(Quartier* q){
	if(!estPresent(q)){
		quartiers.push_back(q);
		notify((unsigned int)quartiers.size());
		return true;
	}
	return false;
}

bool Cite::supprimerQuartier(Quartier* q){
	for(vector<Quartier*>::iterator quartier=quartiers.begin();quartier!=quartiers.end();++quartier){
		if(((*quartier)->getNom()).compare(q->getNom())==0){
			quartiers.erase(quartier);
			return true;
		}	
	}
	return false;
}

void Cite::afficher(){
	int taille = (unsigned int)quartiers.size();
	if(taille <= 0){
		cout<<"La citadelle est vide"<<endl;
	}
	else if(taille == 1){
		cout<<"La citadelle est composé d'un seul et unique batiment"<<endl;
		cout<<"		-"<<(quartiers.front())->getNom()<<" : "<<(quartiers.front())->getCout()<<endl;
	}
	else{
		cout<<"La citadelle dispose de "<<taille<<" batiments :"<<endl;
		for(vector<Quartier*>::iterator quartier=quartiers.begin();quartier!=quartiers.end();++quartier){
			cout<<"		-"<<(quartiers.front())->getNom()<<" : "<<(quartiers.front())->getCout()<<endl;
		}
		cout<<"Elle cumule un total de "<<valeur()<<" points"<<endl;
	}
}

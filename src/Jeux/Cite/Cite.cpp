Cite::Cite(){}

int Cite::valeur(){
	int val =0;
	if(!quartiers_.empty()){
		for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
			val+=(*quartier)->getCout();
		}
	}
	return val;	
}

bool Cite::estPresent(Quartier* q){
	if(quartiers_.empty()){
		for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
			if(((*quartier)->getNom()).compare(q->getNom())==0){
				return true;
			}
		}
	}
	return false;
}

bool Cite::ajouterQuartier(Quartier* q){
	if(!estPresent(q)){
		quartiers_.push_back(q);
		notify((unsigned int)quartiers_.size());
		return true;
	}
	return false;
}

bool Cite::supprimerQuartier(Quartier* q){
	for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
		if(((*quartier)->getNom()).compare(q->getNom())==0){
			quartiers_.erase(quartier);
			return true;
		}	
	}
	return false;
}

int Cite::compterQuartiersMarchands(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){ 
		if(it->estMarchand())
			cpt++;
	}
	
	return cpt;
			
}
int Cite::compterQuartiersReligieux(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){ 
		if(it->estReligieux())
			cpt++;
	}
	
	return cpt;
}
int Cite::compterQuartiersNobles(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){ 
		if(it->estNoble())
			cpt++;
	}
	
	return cpt;
}
int Cite::compterQuartiersMilitaires(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){ 
		if(it->estMilitaire())
			cpt++;
	}
	
	return cpt;
}

void Cite::afficher(){
	int taille = (unsigned int)quartiers_.size();
	if(taille <= 0){
		cout<<"La citadelle est vide"<<endl;
	}
	else if(taille == 1){
		cout<<"La citadelle est composé d'un seul et unique batiment"<<endl;
		cout<<"		-"<<(quartiers_.front())->getNom()<<" : "<<(quartiers_.front())->getCout()<<endl;
	}
	else{
		cout<<"La citadelle dispose de "<<taille<<" batiments :"<<endl;
		for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
			cout<<"		-"<<(quartiers_.front())->getNom()<<" : "<<(quartiers_.front())->getCout()<<endl;
		}
		cout<<"Elle cumule un total de "<<valeur()<<" points"<<endl;
	}
}

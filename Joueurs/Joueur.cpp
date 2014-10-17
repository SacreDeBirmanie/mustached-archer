/*!
 * \file Joueur.cpp
 * \brief La classe Joueur
 * \author François Hallereau & Sébastien Vallée
 */


Joueur::Joueur(){}

Joueur::~Joueur(){}

void Joueur::setEtat{}

Etat Joueur::getEtat(){
	return null;
}
void Joueur::jouer(Partie p){
	this.comportement.jouer(p,this);
}

void Joueur::piocher(int nombre){}

void Joueur::prendrePiece(int nombre){
	pieceOr+=nombre;
}

bool Joueur::construire(Quartier quartier){
	int i=0;
	for(vector<Quartier>::iterator it = main.begin();it!=main.end();++it){
		//TODO vérifier le test d'égalité
		if(it==quartier){//le quartier est dans notre main 
			if(quartier.getCout()<=pieceOr){//on peut acheter le quartier
				cite.push_back(quartier);//on ajoute le quartier dans notre cité
				main.erase(main.begin()+i);//on enlève le quartier de notre main
				return true;
			}
			else
				return false;
		}
		++i;
	}
	return false;	
}

void Joueur::capacite(){}

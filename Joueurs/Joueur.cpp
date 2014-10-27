/*!
 * \file Joueur.cpp
 * \brief La classe Joueur
 * \author François Hallereau & Sébastien Vallée
 */


Joueur::Joueur(){}

Joueur::~Joueur(){}

Etat Joueur::getComportement(){
	return this->comportement;
}

void Joueur::choisirPersonnage(Partie p, Vector<Personnage> persosDispo){
	this->comportement.choisirPersonnage(p,persosDispo,this);
}
void Joueur::jouer(Partie p){
	this->comportement->jouer(p,this);
}

void Joueur::piocher(int nombre){}

void Joueur::prendrePiece(int nombre){
	this->pieceOr+=this->partie.prendrePiece();
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

int Joueur::decompteDesPoints(){
	int total = 0;
	for(vector<Quartier>::iterator it = main.begin();it!=main.end();++it){
		total += *it.getPoint();
	}
	return total;
}

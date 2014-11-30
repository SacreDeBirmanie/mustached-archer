/*!
 * \file Condottiere.cpp
 * \brief Classe Condottiere qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */


/*!
 * \brief Méthode qui défini la capacité du Condottiere
 * Chaque quartier militaire lui rapporte une pièce d'or
 * il peut en plus détruire un quartier
 */

void Condottiere::capacite(Joueur* condottiere,Joueur* cible, Quartier* quartier){
	int po=2;
	vector<Quartier*> cite = condottiere->getCite();
	for(vector<Quartier*>::iterator it = cite.begin();it!=cite.end();++it){
		if((*it)->estMilitaire()) //si le quartier est militaire, +1 pièce
			++po;
	}
	condottiere->prendrePiece(po);

	//Destruction d'un quartier
	if(cible!=NULL){//le condottiere décide d'attaquer un joueur
		Cite* cite = cible->getCite();
		if(cite->estPresent(quartier))
			cite->supprimerQuartier(quartier);
	}
}

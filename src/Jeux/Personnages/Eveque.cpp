/*!
 * \file Eveque.cpp
 * \brief Classe Eveque qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */


/*!
 * \brief Méthode qui défini la capacité de l'évèque
 * Chaque quartier religieux lui rapporte une pièce d'or
 */
void Roi::capacite(Joueur* joueur){	
	int po=0;	
	vector<Quartier*> cite = joueur->getCite();
	for(vector<Quartier*>::iterator it = cite.begin();it!=cite.end();++it){
		if((*it)->estReligieux()) //si le quartier est noble, +1 pièce
			++po;
	}
	joueur->prendrePiece(po);
}




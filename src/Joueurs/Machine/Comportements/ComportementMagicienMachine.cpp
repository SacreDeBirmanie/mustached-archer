/*!
* \file ComportementMagicienMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementMagicienMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementMagicienMachine::ComportementMagicienMachine():ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementMagicienMachine::~ComportementMagicienMachine(){}

//--------------------------------------------------
/*!
* \brief méthode de jeu pour le magicien machine
* \param partie la partie
* \param joueur le joueur
*/
void ComportementMagicienMachine::jouer(Partie * partie,Joueur * joueur){
	choisirGainTour(joueur);
	choixPouvoir(partie,joueur);
	choisirConstruction(joueur);
}

//--------------------------------------------------
/*!
* \brief méthode pour choisir quel pouvoir activer
* \param partie la partie
* \param joueur le joueur
*/
void ComportementMagicienMachine::choixPouvoir(Partie * partie, Joueur * joueur){
	int i = Aleatoire::tirerEntier(1,2);

	if(i==1){
		vector<Joueur*> tmp =  partie->recupererListeJoueurs();
		vector<int> exclus;
		bool trouve = false;
		int i;

		while(!trouve && exclus.size() < tmp.size()){
			i = Aleatoire::tirerEntierAvecExclusion(exclus,0,tmp.size()-1);
			if(tmp.at(i) != joueur){
				trouve = true;
				Magicien::echangerMainContreJoueur(joueur,tmp.at(i));
			}

		}
	}
	else{
		Magicien::echangerMainContrePioche(joueur->getMain(),joueur);
	}
}

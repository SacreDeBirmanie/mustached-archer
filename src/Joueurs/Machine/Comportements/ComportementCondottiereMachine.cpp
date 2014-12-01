/*!
* \file ComportementCondottiereMachine.cpp
* \brief Fichier contenant l'implémentation de la classe ComportementCondottiereMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
ComportementCondottiereMachine::ComportementCondottiereMachine():ComportementMachine(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
ComportementCondottiereMachine::~ComportementCondottiereMachine(){}


//--------------------------------------------------
/*!
* \brief méthode de jeu pour le condottiere machine
* \param partie la partie
* \param joueur le joueur
*/
void ComportementCondottiereMachine::jouer(Partie * partie, Joueur * joueur){
	Condottiere::capacite(joueur);
	choisirGainTour(joueur);
	choisirConstruction(joueur);
	choixDestruction(partie,joueur);

}


//--------------------------------------------------
/*!
* \brief méthode pour détruire un quartier
* \param partie la partie
* \param joueur le joueur
*/
void ComportementCondottiereMachine::choixDestruction(Partie * partie , Joueur * joueur){
	vector<Joueur*> tmp = partie->recupererListeJoueurs();
	vector<int> exclus;
	int i;
	Joueur * jj;
	bool trouve =false;

	while(exclus.size() < tmp.size() && !trouve){
		i = Aleatoire::tirerEntierAvecExclusion(exclus,0,tmp.size()-1);
		jj = tmp.at(i);
		if(jj != joueur){
			vector<Quartier*> qq= jj->recupererCite();

			for(vector<Quartier*>::iterator iter=qq.begin();iter!=qq.end();++iter){
				if(Condottiere::destruction(joueur,jj,(*iter))){
					trouve = true;
				}
			}
		}
	}
}

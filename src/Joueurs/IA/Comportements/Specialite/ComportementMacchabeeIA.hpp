class ComportementMacchabeeIA : public ComportementIA{

	public :
		ComportementMacchabeeIA();
		virtual void jouer(Partie * p,Joueur *j);
		virtual void choisirPersonnage(Partie * partie,vector<Personnage*> persosDispos,Joueur * j);
		virtual void choisirGainTour(Joueur * j);
		virtual void choisirConstruction(Joueur * j);
class Joueur;
class Personnage;
class Partie;

class Comportement{

	public :
		Comportement();
		virtual void jouer(Partie * partie,Joueur *j);
		virtual void choisirPersonnage(Partie * partie,vector<Personnage*> persosDispos,Joueur * j);
		virtual void choisirGainTour(Joueur * j);

};

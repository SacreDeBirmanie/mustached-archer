class Partie;
class Joueur;
class Personnage;

class Comportement{

	public :
		Comportement();
		virtual void jouer(Partie * partie,Joueur *j);
		virtual void choisirPersonnage(Partie * partie,vector<Personnage> persosDispos,Joueur * j);

};

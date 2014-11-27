/** \file Aleatoire.hpp
* \bref Définition du type Aleatoire
*
* Classe qui définit la classe Aleatoire
*/

#include <cstdlib>
#include <ctime>
#include <vector>

class Aleatoire{


	protected :



	public :
		//! Le constructeur
		Aleatoire(){}

		static int tirerEntier(int deb = 0, int fin = 32767){
			srand((unsigned int)time(NULL)); // initialisation de rand
				return rand()%(fin-deb+1) + deb;
		}

		static int tirerEntierAvecExclusion(std::vector<int> exclusion,int deb = 0, int fin = 32767){
				srand((unsigned int)time(NULL)); // initialisation de rand
				int nombre_aleatoire = rand()%(fin-deb+1) + deb;
				bool trouve = false;

				while(!trouve){
					nombre_aleatoire = rand()%(fin-deb+1) + deb;
					for(std::vector<int>::iterator it = exclusion.begin();it!=exclusion.end();++it){
						if(*it==nombre_aleatoire){
							trouve = true;
						}
					}
					if(trouve)
						trouve=false;
					else
						trouve =true;
				}

				return nombre_aleatoire;

		}
};



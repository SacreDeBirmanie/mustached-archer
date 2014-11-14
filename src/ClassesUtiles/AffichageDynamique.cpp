class AffichageDynamique{

#include<stdio.h>
#include<iostream>
#define esc 27

	public:
		
		AffichageDynamique(){}
		
		void couleur(char c){/* change la couleur du texte (couleur de 30 a 47) */
			printf("%c[%dm",esc,c);
		}
		
		void bip(int n){/* fait bipper l'ordinateur n fois */
			do{
				printf ("%c" , 7) ; n--;
			}while (n>0) ;
		}
		
		void gras(){/* écrit en gras */
			printf ("%c[1m",esc);
		}
		
		void effacerLigne(){/* efface la ligne */
			printf ("%c[0K",esc);
		}
		
		void toutEffacer(){/* efface toute la console */
			printf ("%c[2J%c[H" , esc , esc);
		}
		
		void cursoff(){/* dés-affiche le curseur */
			printf ("%c[?25l",esc);
		}
		
		void curson(){ /* affiche le curseur */
			printf ("%c[?25h",esc);
		}
		
		void normal(){/* écrit normalement */
			printf ("%c[0;24m",esc);
		}  /* retour de bold , overstrike , underline */
		
		void poscur(int l,int c){/* positionne le curseur, ligne, colonne */
			printf ("%c[%1d;%1dH" , esc , l , c);
		}
		
		void souligner(){ /* souligne */
			printf ("%c[4m",esc) ;
		}
		
		void clignoter(){ /* fait clignoter le texte*/
			printf ("%c[5m",esc);
		}

};

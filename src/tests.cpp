/** \file main.cpp
* \bref classe principale
*/
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <string>

#include "ClassesUtiles\Aleatoire.cpp"

using namespace std;


int main(){
    int entier = Aleatoire::tirerEntier(0,10);
	cout<<entier<<endl;

	return EXIT_SUCCESS;
}

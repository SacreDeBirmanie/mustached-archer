#include<stdio.h>
#include<iostream>
#include <unistd.h>
#define esc 27

#include "AffichageDynamique.cpp"

using namespace std;

int main(){
	AffichageDynamique * hey = new AffichageDynamique();
	
	cout<<"jean louis david"<<endl;
	
	hey->couleur('d');
	
	cout<<"xD"<<endl;
	
	sleep(1);
	
	hey->normal();
	hey->souligner();
	cout<<"blblblblbl"<<endl;
	
	hey->toutEffacer();
}

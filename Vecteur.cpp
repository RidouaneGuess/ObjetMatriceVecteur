#include<iostream>
#include "Vecteur.hpp"
using namespace std;
Vecteur::Vecteur(int taille)
{
	this->taille=taille;
	tab=new int[this->taille];
	for(int i=0;i<this->taille;i++)
		tab[i]=0;
}
void Vecteur::Saisie()
{
	for(int i=0;i<taille;i++)
		cin>>tab[i];
}
void Vecteur::Afficher()
{
	for(int i=0;i<taille;i++)
		cout<<"\t"<<tab[i]<<endl;
}
Vecteur::~Vecteur()
{
	delete tab;
}

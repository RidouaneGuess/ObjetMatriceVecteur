#include<iostream>
#include "Matrice.hpp"
#include "Vecteur.hpp"
using namespace std;
Matrice::Matrice(int ligne,int colonne)
{
	this->ligne=ligne;
	this->colonne=colonne;
	tab=new int*[this->ligne];
	for(int i=0;i<ligne;i++)
		tab[i]=new int[colonne];
	for(int i=0;i<ligne;i++)
		for(int j=0;j<colonne;j++)
			tab[i][j]=0;
}
void Matrice::Saisie()
{
	for(int i=0;i<ligne;i++)
		for(int j=0;j<colonne;j++)
			cin>>tab[i][j];
}
void Matrice::Afficher()
{
	for(int i=0;i<ligne;i++)
                for(int j=0;j<colonne;j++)
                        cout<<"\t"<<tab[i][j]<<endl;
}
Matrice Matrice::Somme(Matrice A)
{
	Matrice S(ligne,colonne);
	for(int i=0;i<ligne;i++)
                for(int j=0;j<colonne;j++)
                        S.tab[i][j]=tab[i][j]+A.tab[i][j];
	return S;
}
Vecteur Matrice::Produit(Vecteur V)
{
        Vecteur P(V.taille);
        for(int i=0;i<ligne;i++)
                for(int j=0;j<colonne;j++)                                    P.tab[i]=P.tab[i]+tab[i][j]*V.tab[j];             return P;
}
Matrice::~Matrice()
{
	for(int i=0;i<ligne;i++)
		delete tab[i];
	delete tab;
}

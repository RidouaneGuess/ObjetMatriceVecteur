#include<iostream>
#include<string>
#include "Matrice.hpp"
#include "Vecteur.hpp"
using namespace std;
int main()
{
	Matrice A(3,3),B(3,3),C(3,3);
	cout<<"Saisie de A:"<<endl;
	A.Saisie();
	//B.Saisie();
	//C=A.Somme(B);
	//C.Afficher();
	Vecteur V1(3),V2(3);
	cout<<"Saisie de V:"<<endl;
	V1.Saisie();
	cout<<"Affichage de A:"<<endl;
	A.Afficher();
	cout<<"Affichage de V:"<<endl;
	V1.Afficher();
	cout<<"V2=A*V1:"<<endl;
	//V2=A.Produit(V1);
	V2=A*V1;
	cout<<"Affichage de V2:"<<endl;
	V2.Afficher();
	return 0;
}


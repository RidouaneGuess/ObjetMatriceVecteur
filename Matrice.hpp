#include "Vecteur.hpp"
#ifndef MATRICE_HPP
#define MATRICE_HPP
class Matrice
{
	int ligne;
	int colonne;
	int **tab;
	public:
	Matrice(int,int);
	void Afficher();
	void Saisie();
	//Matrice Somme(Matrice);
	Matrice operator+(Matrice);
	//Vecteur Produit(Vecteur);
	Vecteur operator*(Vecteur);
	~Matrice();
};
#endif

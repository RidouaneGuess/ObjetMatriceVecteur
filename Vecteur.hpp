//lude "Matrice.hpp"
#ifndef VECTEUR_HPP
#define VECTEUR_HPP
class Vecteur
{
	int taille;
	int *tab;
	public:
	Vecteur(int);
	void Saisie();
	void Afficher();
	friend class Matrice;
	~Vecteur();
};
#endif

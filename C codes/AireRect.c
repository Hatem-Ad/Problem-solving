#include <stdio.h>
double airRect(double largeur, double hauteur);
int main(int argc, char *argv[])
{
    double largeur, hauteur;
    printf("Donner le largeur : ");
    scanf("%lf", &largeur);
    printf("Donner l'hauteur : ");
    scanf("%lf",&hauteur);
    printf("L'aire de Ractangle est : %lf\n", airRect(largeur, hauteur));
}
double airRect(double largeur , double hauteur)
{
    return largeur * hauteur;
}

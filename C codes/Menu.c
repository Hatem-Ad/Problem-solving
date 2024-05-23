// This function need review.
#include <stdio.h>

int menu();

int main (int argc , char* argv)
{
    switch (menu())
    {
    case 1 :
        printf("Prix : 4dt\n");
        break;
    case 2 :
        printf("Prix : 4.5dt\n");
        break;
    case 3 :
        printf("Prix : 4.3dt\n");
        break;
    case 4 :
        printf("Prix : 4.2dt\n");
        break;

    default:
        printf("Erreur ! refaire le choix !\n");
        break;
    }
    printf("*** Merci pour Votre Service :) ***\n");
}

int menu()
{
    int choix = 0;
    while (choix < 1 || choix > 4)
    {
        printf("*** MENU ***\n");
        printf("1 - Couscous\n");
        printf("2 - Makrouna\n");
        printf("3 - Kamouniya\n");
        printf("4 - Rouz\n");
        printf("Choix : ");
        scanf("%d", &choix);
    }
    return choix;
}

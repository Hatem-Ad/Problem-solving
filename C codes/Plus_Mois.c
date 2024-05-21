#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc , char** argv )
{
    int nombreMystere = 0, nombreEntre = 0,Max,Min = 1,Niveau,compteur = 0;
    char c;
    do
    {
        printf("Donner le niveau \n1 : facile \n2 : Moy  \n3 : Diff \nNiveau :  ");
        scanf("%d", &Niveau);
        if (Niveau == 1)
        {
            Max = 100;
            printf("**[1..100]**\n");
        }
        else if (Niveau == 2)
        {
            Max = 1000;
            printf("**[1..1000]**\n");
        }
        else 
        {
            Max = 10000;
            printf("**[1..10000]**\n");
        }
    } while (Niveau < 1 && Niveau > 3);
    srand(time(NULL));
    nombreMystere = (rand() % (Max - Min + 1)) + Min;
        do
        {
            compteur++;
            printf("Etap %d \n", compteur);
            printf("Quel est le nombre :");
            scanf("%d", &nombreEntre);

            if (nombreMystere > nombreEntre)
            {
                printf("C'est plus ! \n\n");
            }
            else if (nombreMystere < nombreEntre)
            {
                printf("C'est mois !\n\n");
            }
            else
            {
                printf("Tres bien c'est le nombre ! \n\n");
            }
        } while (nombreEntre != nombreMystere);
        printf("Bravo, vous avez trouvé le nombre mystère en %d coups !\n", compteur);
    return 0;
}

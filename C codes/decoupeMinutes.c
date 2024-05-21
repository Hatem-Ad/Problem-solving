#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *heurs, int *minutes);

int main(int argc , char *argv[])
{
    int heurs = 0, minutes = 0;
    printf("Donner Combient de minutes : ");
    scanf("%d", &minutes);

    decoupeMinutes(&heurs, &minutes);

    printf("%d heurs et %d minutes !\n", heurs, minutes);
    return 0;
}

void decoupeMinutes(int *heurs, int *minutes)
{
    *heurs = *minutes / 60;
    *minutes = *minutes % 60;
}

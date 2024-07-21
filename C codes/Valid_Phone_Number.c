#include <stdio.h>
#include <stdbool.h>

// Fonction pour valider le numéro de téléphone
bool valid_phone_number(const char *number) {
    return (number[0] == '(' &&
            number[4] == ')' &&
            number[5] == ' ' &&
            number[9] == '-' &&
            (number[1] >= '0' && number[1] <= '9') && 
            (number[2] >= '0' && number[2] <= '9') && 
            (number[3] >= '0' && number[3] <= '9') && 
            (number[6] >= '0' && number[6] <= '9') && 
            (number[7] >= '0' && number[7] <= '9') && 
            (number[8] >= '0' && number[8] <= '9') && 
            (number[10] >= '0' && number[10] <= '9') && 
            (number[11] >= '0' && number[11] <= '9') && 
            (number[12] >= '0' && number[12] <= '9') && 
            (number[13] >= '0' && number[13] <= '9') &&
            (number[14] == '\0')
            );
}

int main() {
    char *number = "(123) 456-7890";
    printf("Votre numéro est %s\n", valid_phone_number(number) ? "valide" : "invalide");
    return 0;
}

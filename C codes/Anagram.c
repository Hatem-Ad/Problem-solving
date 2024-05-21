#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h> 

// This function to change two characters
void change(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

// This function to sort a word
void sort_word(char *word)
{
    int n = strlen(word);
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < n - i -1; j++)
        {
            if(word[j] > word[j+1])
            {
                change(&word[j],&word[j + 1]);
            }
        }
    }
}

// This function makes all lettres of word lowercase
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// This function to check two words is an anagram or not
bool is_anagram(const char *s1, const char *s2)
{
    if( strlen(s1) != strlen(s2))
    {
        return false;
    }

    char temp1[strlen(s1) + 1];
    char temp2[strlen(s2) + 1];
    strcpy(temp1, s1);
    strcpy(temp2, s2);

    to_lowercase(temp1);
    to_lowercase(temp2);

    sort_word(temp1);
    sort_word(temp2);
 
    return strcmp(temp1, temp2) == 0;
}

// Main function to run the software
int main()
{
    const char *s1 = "Hatem";
    const char *s2 = "Temha";

    if (is_anagram(s1, s2)) {
        printf("%s et %s sont des anagrammes.\n", s1, s2);
    } else {
        printf("%s et %s ne sont pas des anagrammes.\n", s1, s2);
    }

    return 0;
}

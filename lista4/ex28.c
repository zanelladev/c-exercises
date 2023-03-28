#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * removeSpacesFromStr(char *string)
{
    int non_space_count = 0;
 
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')
        {
            string[non_space_count] = string[i];
            non_space_count++;
        }    
    }
    
    string[non_space_count] = '\0';
    return string;
}

int main() {

  char frase[50], fraseInvertida[50];

  printf("Digite uma frase (max. 50 caracteteste): ");
  fgets(frase, 50, stdin);
  frase[strlen(frase)-1] = '\0';

  strcpy(frase, removeSpacesFromStr(frase));

  strcpy(fraseInvertida, strrev(frase));
  
  strcmp(frase, fraseInvertida) ? printf("\nPalindromo\n") : printf("\nNao palindromo\n");

  return 0;
}
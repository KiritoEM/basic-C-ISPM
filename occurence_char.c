#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input;
    char *tab;

    input = (char *)malloc(sizeof(char) * 100);
    tab = (char *)malloc(sizeof(char) * 100);

    if (input == NULL)
    {
        exit(1);
    }

    printf("Entrez une phrase : ");
    scanf("%99[^\n]", input);

    printf("Vous avez saisi : %s\n", input);

    for (int i = 0; i < strlen(input); i++)
    {
        while (input[i] != " ")
        {
            tab += input[i];
        }
    }

    // libération de la mémoire
    free(input);

    return 0;
}

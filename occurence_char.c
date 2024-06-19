#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUMBERS 10 // Nombre maximal de nombres dans la chaîne

int main()
{
    char input[] = "2 5 4 6"; // Chaîne à découper
    int numbers[MAX_NUMBERS]; // Tableau pour stocker les nombres
    int count = 0;            // Compteur pour le nombre de nombres trouvés
    char *token;              // Pointeur pour parcourir les tokens

    // Utilisation de strtok pour découper la chaîne par les espaces
    token = strtok(input, " ");

    // Parcourir tous les tokens trouvés
    while (token != NULL)
    {
        // Convertir le token en entier et l'ajouter au tableau
        numbers[count] = atoi(token);

        // Incrémenter le compteur et obtenir le prochain token
        count++;
        token = strtok(NULL, " ");
    }

    // Afficher les nombres stockés dans le tableau
    printf("Les nombres dans le tableau sont : ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

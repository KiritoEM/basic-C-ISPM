#include <stdio.h>
#include <stdlib.h>

void echange(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int tab[100];
    int i = 0;
    int j = 0;
    int l = 0;
    int n, k;

    // entrée de la dimension n
    printf("Entrez la dimension du tableau: ");
    scanf("%d", &n);

    printf("\n");
    printf("Entrez les valeurs du tableau\n");

    // entrée des valeurs du tableau
    for (i = 0; i < n; i++)
    {
        printf("tab[%d]= ", i + 1);
        scanf("%d", &tab[i]);
    }

    // algo
    k = n - 1;

    for (j = 0; j < n; j++)
    {
        if ((tab[j] == 0))
        {
            while ((k > j) && (tab[k] == 0))
            {
                k--;
            }

            if (k > j)
            {
                echange(&tab[j], &tab[k]);
                k--;
            }
        }
    }

    // affichage
    printf("\nTableau après décalage des zéros:\n");
    for (l = 0; l < n; l++)
    {
        printf("%d ", tab[l]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void entree_val(int *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("tab[%d]= ", i + 1);
        scanf("%d", tab + i);
    }
}

int algo(int *tab, int n, int occ)
{
    int cpt = 0;

    for (int i = 0; i < n; i++)
    {
        if (tab[i] == occ)
        {
            cpt++;
        }
    }

    return cpt;
}

int main()
{
    int *tab;
    int n, occ;

    printf("Entrez la dimension du tableau");
    scanf("%d", &n);

    tab = (int *)malloc(sizeof(int) * n);

    if (tab == NULL)
    {
        exit(1);
    }

    printf("Entrez les valeurs du tableau");
    printf("\n");

    entree_val(tab, n);

    printf("\n");

    printf("Entrez le nombre pour rechercher son occurence dans le tableau: ");
    scanf("%d", &occ);

    printf("Nombre d' occurence du nombre %d: %d", occ, algo(tab, n, occ));

    // libération de la mémoire
    free(tab);

    return 0;
}

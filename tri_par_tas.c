#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int tab[MAX_SIZE];
int n = 0, m;

void echange(int i1, int i2)
{
    int tmp;
    tmp = tab[i1];
    tab[i1] = tab[i2];
    tab[i2] = tmp;
}

void tabTrie()
{
    printf("Les éléments du tableau après tri sont : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int factorisation(int a, int b, char *params)
{
    if (strcmp(params, "Rmin") == 0)
    {
        return a < b;
    }
    else
    {
        return a > b;
    }
}

int lecture()
{
    return tab[0];
}

void ajoutElement(int newElement, char *params)
{
    int i = n++;
    tab[i] = newElement;

    while (i > 0 && factorisation(tab[i], tab[(i - 1) / 2], params))
    {
        echange(i, (i - 1) / 2);
        i = (i - 1) / 2;
    }
}

void extraction(char *params)
{
    int i, k;
    echange(0, --n);
    i = 0;
    k = 1;

    while (k < n)
    {
        if (k + 1 < n && factorisation(tab[k + 1], tab[k], params))
        {
            k++;
        }

        if (!factorisation(tab[k], tab[i], params))
        {
            break;
        }
        echange(i, k);
        i = k;
        k = 2 * i + 1;
    }
}

int main()
{
    int val;
    char params[99];

    // ajout de la dimension du tableau
    printf("Entrez la dimension du tableau : ");
    scanf("%d", &m);
    getchar(); // Vider le tampon pour le caractère '\n' laissé par scanf

    printf("Entrez Rmin ou Rmax : ");
    fgets(params, sizeof(params), stdin);
    params[strcspn(params, "\n")] = '\0'; // Supprimer le '\n' de la fin de params

    printf("\n");

    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < m; i++)
    {
        printf("tab[%d] = ", i);
        scanf("%d", &val);
        ajoutElement(val, params);
    }

    printf("\n");

    while (n > 0)
    {
        extraction(params);
    }

    printf("Les éléments du tableau après extraction de l'élément prioritaire : ");
    for (int j = m - 1; j >= 0; j--)
    {
        printf("%d ", tab[j]);
    }
    printf("\n");

    return 0;
}

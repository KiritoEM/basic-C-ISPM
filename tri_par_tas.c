#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_SIZE 100

int tab[MAX_SIZE];
int n, m;

void echange(int i1, int i2)
{
    int tmp;
    tmp = tab[i1];
    tab[i1] = tab[i2];
    tab[i2] = tmp;
}

void tabTrié()
{
    printf("Les éléments du tableau après tri sont : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
}

int lecture()
{
    return tab[0];
}

void ajoutElement(int newElement)
{
    int i = n - 1;
    tab[n++] = newElement;

    while ((i >= 0) && (tab[i] < tab[(i - 1) / 2]))
    {
        echange(i, (i - 1) / 2);
        i = (i - 1) / 2;
    }
}

void extraction()
{
    int i, k;
    echange(0, --n);
    i = 0;
    k = 1;

    while (k < n)
    {
        if (((k + 1) < n) && (tab[k] > tab[k + 1]))
        {
            k++;
        }

        if (tab[k] > tab[i])
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
    int element, val;

    // ajout de la dimension du tableau
    printf("Entrez la dimension du tableau : ");
    scanf("%d", &m);

    printf("Entrez les éléments du tableau : ");
    for (int i = 0; i < m; i++)
    {
        printf("tab[%d] = ", i);
        scanf("%d", &val);
        ajoutElement(val);
    }

    printf("\n");

    while (n > 0)
    {
        extraction();
    }

    printf("Les éléments du tableau après extraction de l'élément prioritaire : ");
    for (int j = m - 1; j >= 0; j--)
    {
        printf("%d ", tab[j]);
    }

    return 0;
}

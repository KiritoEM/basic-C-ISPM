#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j, k;

    printf("Entrez un nombre: ");
    scanf("%d", &n);

    // Triangle descendant
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Triangle ascendant
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Triangle ascendant aligné à droite
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Triangle descendant aligné à droite
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = i; k < n; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Triangle centré au milieu
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

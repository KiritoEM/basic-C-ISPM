#include <stdio.h>
int sommeDiviseurs(int num)
{
    int sommeDiv = 0;
    for (int a = 1; a <= num / 2; a++)
    {
        if (num % a == 0)
        {
            sommeDiv += a;
        }
    }
    return sommeDiv;
}

int main()
{
    int n;

    printf("Entrez le nombre max: ");
    scanf("%d", &n);

    printf("Les couples de nombres amis jusqu'a %d sont :\n", n);

    for (int i = 220; i < n; i++)
        for (int j = 220; j < n; j++)
        {
            {
                int sommeA = sommeDiviseurs(i);
                int sommeB = sommeDiviseurs(j);

                if ((i != j) && (sommeA == j) && (sommeB == i))
                {
                    printf("(%d, %d) sont des nombres amis\n", i, j);
                }
            }
        }
    return 0;
}

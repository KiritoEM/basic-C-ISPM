#include <stdio.h>
int sommeDiviseurs(int num)
{
    int somme = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            somme += i;
        }
    }
    return somme;
}

int main()
{
    int n;

    printf("Entrez le nombre max: ");
    scanf("%d", &n);

    printf("Les couples de nombres amis jusqu'a %d sont :\n", n);

    for (int a = 220; a <= n; a++)
    {
        int b = sommeDiviseurs(a);

        if (b > a && b <= n && sommeDiviseurs(b) == b)
        {
            printf("(%d, %d) sont des nombres amis\n", a, b);
        }
    }

    return 0;
}

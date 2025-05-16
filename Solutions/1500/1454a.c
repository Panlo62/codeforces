#include <stdio.h>

void perm(short n)
{
    printf("%hd ", n);
    for (short i = 1; i < n; i++)
        printf("%hd ", i);
        
    printf("\n", n);
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        short n;
        scanf("%hd", &n);

        perm(n);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void seq(short n, int *b)
{
    int i = 0, j = n - 1;
    while (i < j)
        printf("%d %d ", b[i++], b[j--]);
    if (i == j)
        printf("%d ", b[i]);
    printf("\n");
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        short n;
        scanf("%hd", &n);
        int *b = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);

        seq(n, b);
    }

    return 0;
}
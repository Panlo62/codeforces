#include <stdio.h>

void snake(int n, int m)
{
    for (int i = 0; i < m; i++)
        printf("%c", '#');

    for (int i = 0, j = 0; i < n / 2; i++, j = 1 - j)
    {
        printf("\n");
        if (j == 1)
            printf("%c", '#');
        for (int i = 0; i < m - 1; i++)
            printf("%c", '.');
        if (j == 0)
            printf("%c", '#');

        printf("\n");
        for (int i = 0; i < m; i++)
            printf("%c", '#');
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    snake(n, m);

    return 0;
}
#include <stdio.h>

void checkerboard(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if ((i / 2 + j / 2) & 1)
                printf(".");
            else
                printf("#");
        }
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        checkerboard(n);
    }

    return 0;
}
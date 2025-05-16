#include <stdio.h>
#include <stdlib.h>

void cipher(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        int b;
        scanf("%d\n", &b);
        for (int j = 0; j < b; j++)
        {
            char c;
            scanf("%c", &c);
            if (c == 'U')
                a[i] = (a[i] + 9) % 10;
            else
                a[i] = (a[i] + 1) % 10;
        }
        printf("%d ", a[i]);
    }

    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        cipher(n, a);
    }

    return 0;
}
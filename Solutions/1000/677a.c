#include <stdio.h>
#include <stdlib.h>

int width(int n, int h, int *ht)
{
    int road = 0;
    for (int i = 0; i < n; i++)
        if (ht[i] > h)
            road += 2;
        else
            road++;

    return road;
}

int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int *ht = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &ht[i]);

    printf("%d", width(n, h, ht));

    return 0;
}
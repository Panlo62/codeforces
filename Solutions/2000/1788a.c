#include <stdio.h>
#include <stdlib.h>

int divide(int n, int *a)
{
    int two = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 2)
            two++;

    if (two & 1)
        return -1;

    two /= 2;
    int k = 1;
    if (a[0] == 2)
        two--;
    while (two > 0)
        if (a[k++] == 2)
            two--;

    return k;
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

        printf("%d\n", divide(n, a));
    }

    return 0;
}
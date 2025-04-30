#include <stdio.h>
#include <stdlib.h>

int *summands(int n)
{
    int *res = (int *)calloc(6, sizeof(int));

    int i = 0, mul = 1;
    while (n)
    {
        if (n % 10)
            res[++i] = (n % 10) * mul;
        n /= 10, mul *= 10;
    }

    res[0] = i;

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int *arr = summands(n);

        printf("%d\n", arr[0]);
        for (int i = 1; i < 6 && arr[i]; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
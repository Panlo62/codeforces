#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

char *reduce(int n, int *arr)
{
    qsort(arr, n, sizeof(int), comp);

    for (int i = 1; i < n; i++)
        if (arr[i] - arr[i - 1] > 1)
            return "NO";

    return "YES";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        printf("%s\n", reduce(n, arr));
    }

    return 0;
}
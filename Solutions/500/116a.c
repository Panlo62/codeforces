#include <stdio.h>
#include <stdlib.h>

int capacity(int n, int **arr)
{
    int curr = 0, cap = 0;
    for (int i = 0; i < n; i++)
    {
        curr = curr - arr[i][0] + arr[i][1];
        if (cap < curr)
            cap = curr;
    }
    return cap;
}

int main()
{
    int n;
    scanf("%d", &n);
    int **arr = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(2 * sizeof(int));
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    printf("%d", capacity(n, arr));

    return 0;
}
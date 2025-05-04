#include <stdio.h>
#include <stdlib.h>

int swaps(int n, int *arr)
{
    int maxi = 0, mini = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[maxi] < arr[i])
            maxi = i;
        if (arr[mini] >= arr[i])
            mini = i;
    }

    int req_swaps = maxi + n - mini - 1;
    return (mini < maxi) ? req_swaps - 1 : req_swaps;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", swaps(n, arr));

    return 0;
}
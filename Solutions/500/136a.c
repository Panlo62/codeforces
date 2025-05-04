#include <stdio.h>
#include <stdlib.h>

int *sort(int n, int *arr)
{
    int *sorted = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        sorted[arr[i] - 1] = i + 1;

    return sorted;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *sorted = sort(n, arr);
    for (int i = 0; i < n; i++)
        printf("%d ", sorted[i]);

    return 0;
}
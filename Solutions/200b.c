#include <stdio.h>
#include <stdlib.h>

double portion(int n, int *arr)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return (double)total / n;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%.12f", portion(n, arr));

    return 0;
}
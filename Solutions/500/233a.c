#include <stdio.h>
#include <stdlib.h>

int *perm(int n)
{
    int *arr = (int *)malloc(n * sizeof(int));
    if (n & 1)
        arr[0] = -1;
    else
    {
        for (int i = 0; i < n; i += 2)
        {
            arr[i] = i + 2;
            arr[i + 1] = i + 1;
        }
    }

    return arr;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = perm(n);
    if (arr[0] == -1)
        printf("-1");
    else
    {
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int winner(int n, int **arr)
{
    int maxi = 0;
    while (maxi < n)
        if (arr[maxi][0] > 10)
            maxi++;
        else
            break;

    for (int i = maxi + 1; i < n; i++)
        if (arr[i][0] <= 10 && arr[i][1] > arr[maxi][1])
            maxi = i;

    return maxi + 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int **arr = (int **)malloc(n * sizeof(int *));
        for (int i = 0; i < n; i++)
        {
            arr[i] = (int *)malloc(2 * sizeof(int));
            scanf("%d %d", &arr[i][0], &arr[i][1]);
        }

        printf("%d\n", winner(n, arr));
    }

    return 0;
}
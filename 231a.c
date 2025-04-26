#include <stdio.h>
#include <stdlib.h>

int solvable(int n, int **arr)
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (((arr[i][0] == 1) + (arr[i][1] == 1) + (arr[i][2] == 1)) > 1)
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);

    int **arr = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(3 * sizeof(int));
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    printf("%d", solvable(n, arr));

    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);

    return 0;
}
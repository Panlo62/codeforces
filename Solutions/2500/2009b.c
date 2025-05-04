#include <stdio.h>
#include <stdlib.h>

int *cols(int n, char **beatmap)
{
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 4; j++)
            if (beatmap[i][j] == '#')
                arr[n - 1 - i] = j + 1;

    return arr;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char **beatmap = (char **)malloc(n * sizeof(char *));
        for (int i = 0; i < n; i++)
        {
            beatmap[i] = (char *)malloc(5 * sizeof(char));
            scanf("%s", beatmap[i]);
        }

        int *arr = cols(n, beatmap);
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}
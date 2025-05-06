#include <stdio.h>
#include <stdlib.h>

void reduce(int n, int k, char **grid)
{
    for (int i = 0; i < n; i += k)
    {
        for (int j = 0; j < n; j += k)
            printf("%c", grid[i][j]);
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d\n", &n, &k);
        char **grid = (char **)malloc(n * sizeof(char *));
        for (int i = 0; i < n; i++)
        {
            grid[i] = (char *)malloc((n + 1) * sizeof(char));
            scanf("%s", grid[i]);
        }

        reduce(n, k, grid);
    }

    return 0;
}
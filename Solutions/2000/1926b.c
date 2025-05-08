#include <stdio.h>
#include <stdlib.h>

char *shape(int n, char **grid)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '1')
            {
                if (grid[i + 1][j] == '1' && grid[i][j + 1] == '1')
                    return "SQUARE";
                else
                    return "TRIANGLE";
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char **grid = (char **)malloc(n * sizeof(char *));
        for (int i = 0; i < n; i++)
        {
            grid[i] = (char *)malloc((n + 1) * sizeof(char));
            scanf("%s", grid[i]);
        }

        printf("%s\n", shape(n, grid));
    }

    return 0;
}
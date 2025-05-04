#include <stdio.h>
#include <stdlib.h>

char *picture(int n, int m, char **mat)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mat[i][j] != 'W' && mat[i][j] != 'B' && mat[i][j] != 'G')
                return "#Color";

    return "#Black&White";
}

int main()
{
    int n, m;
    scanf("%d %d\n", &n, &m);
    char **mat = (char **)malloc((n + 1) * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        mat[i] = (char *)malloc(m * sizeof(char));
        for (int j = 0; j < m - 1; j++)
            scanf("%c ", &mat[i][j]);
        scanf("%c\n", &mat[i][m - 1]);
    }

    printf("%s", picture(n, m, mat));

    return 0;
}
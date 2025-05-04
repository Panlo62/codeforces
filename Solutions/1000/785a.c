#include <stdio.h>
#include <stdlib.h>

int faces(int n, char **shapes)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (*shapes[i] == 'T')
            res += 4;
        else if (*shapes[i] == 'C')
            res += 6;
        else if (*shapes[i] == 'O')
            res += 8;
        else if (*shapes[i] == 'D')
            res += 12;
        else
            res += 20;
    }

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    char **shapes = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        shapes[i] = (char *)malloc(13 * sizeof(char));
        scanf("%s", shapes[i]);
    }

    printf("%d", faces(n, shapes));

    return 0;
}
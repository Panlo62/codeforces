#include <stdio.h>
#include <stdlib.h>

char *game(int n, int **rounds)
{
    int m = 0, c = 0;
    for (int i = 0; i < n; i++)
        if (rounds[i][0] > rounds[i][1])
            m++;
        else if (rounds[i][0] < rounds[i][1])
            c++;

    if (m > c)
        return "Mishka";
    else if (c > m)
        return "Chris";
    else
        return "Friendship is magic!^^";
}

int main()
{
    int n;
    scanf("%d", &n);
    int **rounds = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        rounds[i] = (int *)malloc(2 * sizeof(int));
        scanf("%d %d", &rounds[i][0], &rounds[i][1]);
    }

    printf("%s", game(n, rounds));

    return 0;
}
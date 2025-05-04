#include <stdio.h>

int points(char board[10][11])
{
    int pt[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    int res = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (board[i][j] == 'X')
                res += pt[i][j];

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char board[10][11];
        for (int i = 0; i < 10; i++)
            scanf("%s", board[i]);

        printf("%d\n", points(board));
    }

    return 0;
}
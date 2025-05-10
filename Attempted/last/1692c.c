#include <stdio.h>

void bishop(char board[8][9])
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (board[i][j] == '#')
            {
                int x = i + 1, y = j + 1;
                while (x < 7 && y < 7 && board[x][y] == '#' && board[x + 1][y - 1] != '#')
                    x++, y++;
                if (x != 8 && y != 8)
                {
                    printf("%d %d", x, y);
                    return;
                }
            }
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char board[8][9];
        for (int i = 0; i < 8; i++)
            scanf("%s", board[i]);

        bishop(board);
    }

    return 0;
}
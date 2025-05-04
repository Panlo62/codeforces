#include <stdio.h>

int moves(int arr[5][5])
{
    int moves = 0;
    int x = -1, y = -1;
    for (int i = 0; i < 5 && x == -1; i++)
        for (int j = 0; j < 5 && x == -1; j++)
            if (arr[i][j] == 1)
                x = i, y = j;

    moves += (2 - x > 0) ? 2 - x : x - 2;
    moves += (2 - y > 0) ? 2 - y : y - 2;

    return moves;
}

int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &arr[i][j]);

    printf("%d", moves(arr));

    return 0;
}
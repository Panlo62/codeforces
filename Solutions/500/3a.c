#include <stdio.h>

void move(char start[3], char end[3])
{
    char row_mv, col_mv;
    int row, col;
    if (start[0] < end[0])
    {
        row_mv = 'R';
        row = end[0] - start[0];
    }
    else
    {
        row_mv = 'L';
        row = start[0] - end[0];
    }

    if (start[1] < end[1])
    {
        col_mv = 'U';
        col = end[1] - start[1];
    }
    else
    {
        col_mv = 'D';
        col = start[1] - end[1];
    }

    printf("%d\n", (row > col) ? row : col);

    for (int i = 0; i < row && i < col; row--, col--)
        printf("%c%c\n", row_mv, col_mv);

    while (row--)
        printf("%c\n", row_mv);

    while (col--)
        printf("%c\n", col_mv);
}

int main()
{
    char start[3], end[3];
    scanf("%s %s", start, end);

    move(start, end);
    return 0;
}
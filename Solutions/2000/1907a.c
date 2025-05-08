#include <stdio.h>

void move(char c, int r)
{
    for (char col = 'a'; col < 'i'; col++)
        if (col != c)
            printf("%c%d\n", col, r);

    for (int row = 1; row < 9; row++)
        if (row != r)
            printf("%c%d\n", c, row);
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char c;
        int r;
        scanf("%c%d\n", &c, &r);

        move(c, r);
    }

    return 0;
}
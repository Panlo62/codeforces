#include <stdio.h>

int area(int coord[4][2])
{
    if (coord[0][0] == coord[1][0])
        return (coord[0][1] - coord[1][1]) * (coord[0][1] - coord[1][1]);
    else
        return (coord[0][0] - coord[1][0]) * (coord[0][0] - coord[1][0]);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int coord[4][2];
        for (int i = 0; i < 4; i++)
            scanf("%d %d", &coord[i][0], &coord[i][1]);

        printf("%d\n", area(coord));
    }

    return 0;
}
#include <stdio.h>

void word()
{
    int ind = 0;
    for (int i = 0; i < 8; i++)
    {
        char row[9];
        scanf("%s", row);
        if (ind)
        {
            if (row[ind] != '.')
                printf("%c", row[ind]);
        }
        else
            for (int j = 0; j < 8; j++)
                if (row[j] != '.')
                    ind = j, printf("%c", row[ind]);
    }

    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        word();

    return 0;
}
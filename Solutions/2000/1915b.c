#include <stdio.h>

char letter(char s[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        int val = 0;
        if (s[i][0] != '?')
            val += s[i][0] - 'A' + 1;
        if (s[i][1] != '?')
            val += s[i][1] - 'A' + 1;
        if (s[i][2] != '?')
            val += s[i][2] - 'A' + 1;
        if (val != 6)
            return 'A' + 6 - val - 1;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[3][4];
        for (int i = 0; i < 3; i++)
            scanf("%s", s[i]);

        printf("%c\n", letter(s));
    }

    return 0;
}
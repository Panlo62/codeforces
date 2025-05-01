#include <stdio.h>

int check(char c)
{
    return (c == 'c') || (c == 'o') || (c == 'd') || (c == 'e') || (c == 'f') || (c == 'r') || (c == 's');
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c[2];
        scanf("%s", c);

        printf("%s\n", (check(*c)) ? "YES" : "NO");
    }

    return 0;
}
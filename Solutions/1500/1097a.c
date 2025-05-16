#include <stdio.h>

void check(char S, char N)
{
    for (int i = 0; i < 5; i++)
    {
        char s, n;
        scanf("%c%c ", &n, &s);

        if (n == N || s == S)
        {
            printf("YES");
            return;
        }
    }

    printf("NO");
}

int main()
{
    char s, n;
    scanf("%c%c\n", &n, &s);

    check(s, n);

    return 0;
}
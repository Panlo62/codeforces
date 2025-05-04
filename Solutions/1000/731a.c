#include <stdio.h>

int moves(char *s)
{
    int rot = 0;
    char prev = 'a';

    while (*s != '\0')
    {
        int clock = *s - prev, anti = prev - *s;
        if (clock < 0)
            clock += 26;
        if (anti < 0)
            anti += 26;
        rot += (clock < anti) ? clock : anti;
        prev = *s++;
    }

    return rot;
}

int main()
{
    char s[101];
    scanf("%s", s);

    printf("%d", moves(s));

    return 0;
}
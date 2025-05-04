#include <stdio.h>

int freq(char *s)
{
    int a = 0, b = 0;
    while (*s != '\0')
        if (*s++ == 'A')
            a++;
        else
            b++;

    return (a > b) ? 'A' : 'B';
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[6];
        scanf("%s", s);

        printf("%c\n", freq(s));
    }

    return 0;
}
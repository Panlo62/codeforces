#include <stdio.h>

void name(char *a, char *b, char *c)
{
    char s[4];
    s[0] = *a, s[1] = *b, s[2] = *c, s[3] = '\0';
    printf("%s\n", s);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[11], b[11], c[11];
        scanf("%s %s %s", a, b, c);

        name(a, b, c);
    }

    return 0;
}
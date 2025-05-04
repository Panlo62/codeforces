#include <stdio.h>

int check(char *s)
{
    return (s[0] == 'a') || (s[1] == 'b') || (s[2] == 'c');
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[4];
        scanf("%s", s);

        printf("%s\n", check(s) ? "YES" : "NO");
    }

    return 0;
}
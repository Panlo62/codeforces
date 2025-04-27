#include <stdio.h>

char *translate(char *s, char *t)
{
    int n = 0;
    char *word = s;
    while (*word++ != '\0')
        n++;

    for (int i = 0; i < n; i++)
        if (s[i] != t[n - i - 1])
            return "NO";

    return "YES";
}

int main()
{
    char s[100], t[100];
    scanf("%s %s", s, t);

    printf("%s", translate(s, t));

    return 0;
}
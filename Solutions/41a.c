#include <stdio.h>

char *translate(char *s, char *t)
{
    int n = 0;
    char *s_word = s, *t_word = t;
    while (*s_word != '\0' && *t_word != '\0')
        s_word++, t_word++, n++;

    if (*s_word != *t_word)
        return "NO";

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
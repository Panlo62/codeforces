#include <stdio.h>

short abss(short n) { return (n < 0) ? -n : n; }

short time(char *keyboard, char *s)
{
    short place[26];
    for (int i = 0; i < 26; i++)
        place[keyboard[i] - 'a'] = i;

    short prev = place[*s++ - 'a'], ans = 0;
    while (*s != '\0')
        ans += abss(place[*s - 'a'] - prev), prev = place[*s++ - 'a'];

    return ans;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        char keyboard[27], s[51];
        scanf("%s %s", keyboard, s);

        printf("%hd\n", time(keyboard, s));
    }

    return 0;
}
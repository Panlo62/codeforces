#include <stdio.h>

char *panagram(int n, char *s)
{
    if (n < 26)
        return "NO";

    int unique[26];
    for (int i = 0; i < 26; i++)
        unique[i] = 0;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int ind = (s[i] < 'a') ? s[i] - 'A' : s[i] - 'a';
        if (unique[ind]++ == 0)
            cnt++;
    }

    return (cnt == 26) ? "YES" : "NO";
}

int main()
{
    int n;
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);

    printf("%s", panagram(n, s));

    return 0;
}
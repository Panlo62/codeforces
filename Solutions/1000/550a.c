#include <stdio.h>

char *check_substring(char *s)
{
    int i = 0;
    while (s[i + 1] != '\0')
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            i += 2;
            while (s[i] != '\0' && s[i + 1] != '\0')
            {
                if (s[i] == 'B' && s[i + 1] == 'A')
                    return "YES";
                i++;
            }
        }
        i++;
    }

    i = 0;
    while (s[i + 1] != '\0')
    {
        if (s[i] == 'B' && s[i + 1] == 'A')
        {
            i += 2;
            while (s[i] != '\0' && s[i + 1] != '\0')
            {
                if (s[i] == 'A' && s[i + 1] == 'B')
                    return "YES";
                i++;
            }
        }
        i++;
    }

    return "NO";
}

int main()
{
    char s[100001];
    scanf("%s", s);

    printf("%s", check_substring(s));
    return 0;
}
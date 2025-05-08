#include <stdio.h>

char *rearrange(char *s)
{
    char *ptr = s, prev = *s;
    while (*ptr != '\0')
    {
        if (prev != *ptr)
        {
            *s = *ptr;
            *ptr = prev;
            return s;
        }
        ptr++;
    }

    return "";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[11];
        scanf("%s", s);

        char *rearrangement = rearrange(s);
        if (rearrangement == "")
            printf("NO\n");
        else
            printf("YES\n%s\n", rearrangement);
    }

    return 0;
}
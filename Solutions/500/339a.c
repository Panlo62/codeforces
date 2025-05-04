#include <stdio.h>
#include <stdlib.h>

char *convert(char *s)
{
    int one = 0, two = 0, three = 0;
    while (*s != '\0')
    {
        if (*s == '1')
            one++;
        else if (*s == '2')
            two++;
        else if (*s == '3')
            three++;
        s++;
    }

    char *new_s = (char *)malloc((one + two + three) * (one + two + three - 1) * sizeof(char));
    int i = 0;
    while (one--)
    {
        new_s[i++] = '1';
        new_s[i++] = '+';
    }
    while (two--)
    {
        new_s[i++] = '2';
        new_s[i++] = '+';
    }
    while (three--)
    {
        new_s[i++] = '3';
        new_s[i++] = '+';
    }

    new_s[i - 1] = '\0';
    return new_s;
}

int main()
{
    char s[100];
    scanf("%s", s);

    printf("%s", convert(s));

    return 0;
}
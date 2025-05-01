#include <stdio.h>

void convert(char *s)
{
    while (*s != '\0')
        if (*s == '.')
            printf("0"), *s++;
        else if (*s++ == '-' && *s++ == '.')
            printf("1");
        else
            printf("2");
}

int main()
{
    char s[201];
    scanf("%s", s);

    convert(s);

    return 0;
}
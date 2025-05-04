#include <stdio.h>

char *and(char *n1, char *n2)
{
    char *n = n1;

    while (*n1 != '\0')
    {
        if (*n1 == *n2)
            *n1 = '0';
        else
            *n1 = '1';
        n1++, n2++;
    }

    return n;
}

int main()
{
    char n1[101], n2[101];
    scanf("%s %s", n1, n2);

    printf("%s", and(n1, n2));

    return 0;
}
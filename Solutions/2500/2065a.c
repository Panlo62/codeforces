#include <stdio.h>

char *plural(char *s)
{
    char *ptr = s;
    while (*s != '\0')
        *s++;

    *s--, *s--;
    *s++ = 'i';
    *s = '\0';

    return ptr;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char W[11];
        scanf("%s", W);

        printf("%s\n", plural(W));
    }

    return 0;
}
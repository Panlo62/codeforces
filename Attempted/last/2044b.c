#include <stdio.h>

char *ship(char *a)
{
    char s[101] = '\0';

    while (*a != '\0')
        if (*a == 'q')
            *s = 'p', a++;
        else if (*a == 'p')
            *s = 'q', a++;
        else
            *s = *a++;

    return s;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[101];
        scanf("%s", a);

        printf("%s\n", ship(a));
    }

    return 0;
}
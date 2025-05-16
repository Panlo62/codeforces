#include <stdio.h>

void ship(char *a)
{
    char b[101];
    int ind = 100;

    while (*a != '\0')
        if (*a == 'q')
            b[--ind] = 'p', a++;
        else if (*a == 'p')
            b[--ind] = 'q', a++;
        else
            b[--ind] = *a++;

    int i = 0;
    while (i < 100)
        b[i++] = b[ind++];

    b[i++] = '\0';

    printf("%s\n", b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[101];
        scanf("%s", a);

        ship(a);
    }

    return 0;
}
#include <stdio.h>

void find_a(char *b)
{
    char a[101], *ptr = a;
    int i = 0;
    a[i++] = *b++;

    while (1)
    {
        a[i++] = *b++;
        if (*b++ == '\0')
        {
            a[i] = '\0';
            printf("%s\n", ptr);
            return;
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char b[101];
        scanf("%s", b);

        find_a(b);
    }

    return 0;
}
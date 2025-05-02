#include <stdio.h>

void swap(char *a, char *b)
{
    char t = *b;
    *b = *a;
    *a = t;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[4], b[4];
        scanf("%s %s", a, b);

        swap(a, b);
        printf("%s %s\n", a, b);
    }

    return 0;
}
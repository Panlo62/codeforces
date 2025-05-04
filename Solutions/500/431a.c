#include <stdio.h>

int waste(int *a, char *s)
{
    int calories = 0;

    while (*s != '\0')
        calories += a[*s++ - '1'];

    return calories;
}

int main()
{
    int a[4];
    scanf("%d %d %d %d ", &a[0], &a[1], &a[2], &a[3]);
    char s[100001];
    scanf("%s", s);

    printf("%d", waste(a, s));

    return 0;
}
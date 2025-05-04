#include <stdio.h>

char *check(int a, int b, int c)
{
    if (a < b && b < c)
        return "STAIR";
    if (a < b && b > c)
        return "PEAK";
    return "NONE";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%s\n", check(a, b, c));
    }

    return 0;
}
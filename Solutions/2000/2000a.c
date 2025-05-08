#include <stdio.h>

int check(int a)
{
    if ((102 <= a && a <= 109) || (1010 <= a && a <= 1099))
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);

        printf("%s\n", check(a) ? "YES" : "NO");
    }

    return 0;
}
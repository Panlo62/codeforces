#include <stdio.h>

int val(int n)
{
    if (n == 3)
        return 3;
    return 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", val(n));
    }

    return 0;
}
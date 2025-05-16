#include <stdio.h>

void ped(int n)
{
    if (n % 3 == 0)
        printf("%d %d %d\n", n / 3, n / 3 + 1, n / 3 - 1);
    else if (n % 3 == 1)
        printf("%d %d %d\n", n / 3, n / 3 + 2, n / 3 - 1);
    else
        printf("%d %d %d\n", n / 3 + 1, n / 3 + 2, n / 3 - 1);
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        ped(n);
    }

    return 0;
}
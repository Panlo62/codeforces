#include <stdio.h>

void summands(int n)
{
    if (n & 1)
        printf("9 %d", n - 9);
    else
        printf("4 %d", n - 4);
}

int main()
{
    int n;
    scanf("%d", &n);

    summands(n);

    return 0;
}
#include <stdio.h>

void prime(int n)
{
    printf("%d\n", n / 2);
    for (int i = 0; i < n / 2 - 1; i++)
        printf("%d ", 2);

    if (n % 2)
        printf("3");
    else
        printf("2");
}

int main()
{
    int n;
    scanf("%d", &n);

    prime(n);

    return 0;
}
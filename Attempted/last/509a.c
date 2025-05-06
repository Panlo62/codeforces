#include <stdio.h>

int val(int n)
{
    1 1 1 1 1
    1 2 3 4 5
    1 3 6 10 15
    1 4 10 20 35
    1 5 15 35 70
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", val(n));

    return 0;
}
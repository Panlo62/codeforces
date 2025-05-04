#include <stdio.h>

char *game(int n)
{
    if (n & 1)
        return "Ehab";
    return "Mahmoud";
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%s", game(n));

    return 0;
}
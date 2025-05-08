#include <stdio.h>

void word(int n)
{
    if (n < 29)
        printf("aa%c\n", n - 3 + 'a');
    else if (n < 53)
        printf("a%cz\n", n - 28 + 'a');
    else
        printf("%czz\n", n - 53 + 'a');
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        word(n);
    }

    return 0;
}
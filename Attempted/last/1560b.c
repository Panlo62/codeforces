#include <stdio.h>

int look(int a, int b, int c)
{
    if (a < b)
        a = a + b, b = a - b, a -= b;

    if (b - a)
        return -1;
        
    int n = 2 * (b - a);
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%d\n", look(a, b, c));
    }

    return 0;
}
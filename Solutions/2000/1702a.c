#include <stdio.h>

int red(int m)
{
    int dig = 0, exp = 1;
    while (m > 9)
    {
        dig += (m % 10) * exp;
        exp *= 10;
        m /= 10;
    }
    dig += (m - 1) * exp;
    return dig;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m;
        scanf("%d", &m);

        printf("%d\n", red(m));
    }

    return 0;
}
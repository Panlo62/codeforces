#include <stdio.h>

int subtract(int n, int k)
{
    while (k)
    {
        int dig = n % 10;
        if (dig == 0)
        {
            n /= 10;
            k--;
        }
        else if (k < dig)
        {
            n -= k;
            k = 0;
        }
        else
        {
            k -= dig;
            n -= dig;
        }
    }

    return n;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d", subtract(n, k));

    return 0;
}
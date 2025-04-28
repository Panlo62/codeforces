#include <stdio.h>

char *lucky(long long n)
{
    int lucky_digits = 0;

    while (n)
    {
        switch (n % 10)
        {
        case 4:
        case 7:
            lucky_digits++;
        }
        n /= 10;
    }

    return (lucky_digits == 4 || lucky_digits == 7) ? "YES" : "NO";
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%s", lucky(n));

    return 0;
}
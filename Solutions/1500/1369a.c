#include <stdio.h>

int beautiful(int n)
{
    return n % 4 == 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%s\n", beautiful(n) ? "YES" : "NO");
    }

    return 0;
}
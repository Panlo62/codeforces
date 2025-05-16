#include <stdio.h>

int award(int n, int m, int k)
{
    return n <= ((m < k) ? m : k);
}

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    printf("%s", award(n, m, k) ? "YES" : "NO");
}
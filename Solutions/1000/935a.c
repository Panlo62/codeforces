#include <stdio.h>

int sqrt(int n)
{
    int l = 1, r = n, ans = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid <= n / mid)
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    return ans;
}

int ways(int n)
{
    int res = 1, root = sqrt(n);

    for (int i = 2; i <= root; i++)
        if (n % i == 0)
            res += 2;

    return res - (root * root == n);
}

int ways2(int n)
{
    int res = 0;

    for (int i = 1; i <= n / 2; i++)
        if ((n - i) % i == 0)
            res++;

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%d", ways(n));

    return 0;
}
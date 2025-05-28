#include <stdio.h>
#include <stdlib.h>

int ways(int n)
{
    const int MOD = 1000000007;

    int **dp = (int **)malloc(4 * sizeof(int *));
    for (int i = 0; i < 4; i++)
    {
        dp[i] = (int *)malloc(n * sizeof(int));
        dp[i][0] = 1;
    }

    dp[0][0] = 0;

    for (int i = 1; i < n; i++)
    {
        dp[0][i] = (0LL + dp[1][i - 1] + dp[2][i - 1] + dp[3][i - 1]) % MOD;
        dp[1][i] = (0LL + dp[0][i - 1] + dp[2][i - 1] + dp[3][i - 1]) % MOD;
        dp[2][i] = (0LL + dp[0][i - 1] + dp[1][i - 1] + dp[3][i - 1]) % MOD;
        dp[3][i] = (0LL + dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1]) % MOD;
    }

    return dp[0][n - 1];
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", ways(n));

    return 0;
}
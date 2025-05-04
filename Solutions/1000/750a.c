#include <stdio.h>

int solve(int n, int k)
{
    int solved = 0;
    int time = 240 - k;

    while (time >= 0) {
        if (solved == n) return n;
        time -= ++solved * 5;
    }

    return solved - 1;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d", solve(n, k));

    return 0;
}
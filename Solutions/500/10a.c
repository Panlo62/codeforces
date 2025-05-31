#include <stdio.h>

int energy(int n, int p[3], int t[2])
{
    int l, r;
    scanf("%d %d", &l, &r);
    int sum = p[0] * (r - l), time = r;

    for (int i = 1; i < n; i++)
    {
        scanf("%d %d", &l, &r);

        if (l - time <= t[0])
            sum += p[0] * (l - time);
        else if (l - time <= t[1])
            sum += p[0] * t[0] + p[1] * (l - time - t[0]);
        else
            sum += p[0] * t[0] + p[1] * t[1] + p[2] * (l - time - t[0] - t[1]);

        sum += p[0] * (r - l);
        time = r;
    }

    return sum;
}

int main()
{
    int n, p[3], t[2];
    scanf("%d %d %d %d %d %d", &n, &p[0], &p[1], &p[2], &t[0], &t[1]);

    printf("%d", energy(n, p, t));

    return 0;
}
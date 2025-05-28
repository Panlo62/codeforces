#include <stdio.h>
#include <stdlib.h>

long long points(int n, int *a)
{
    long long *freq = (long long *)calloc(100001, sizeof(long long));

    for (int i = 0; i < n; i++)
        freq[a[i]] += a[i];

    for (int i = 2; i <= 100001; i++)
    {
        freq[i] += freq[i - 2];
        if (freq[i - 1] > freq[i])
            freq[i] = freq[i - 1];
    }

    long long res = freq[100001];
    free(freq);

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%lld", points(n, a));
    free(a);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int special(int n, int *a)
{
    int max_ele = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max_ele)
            max_ele = a[i];

    char *sum = (char *)calloc(max_ele + 1, sizeof(char));
    for (int i = 0; i < n - 1; i++)
    {
        int curr = a[i];
        for (int j = i + 1; j < n; j++)
        {
            curr += a[j];
            if (curr > max_ele)
                break;
            sum[curr] = 1;
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++)
        if (sum[a[i]])
            res++;

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%d\n", special(n, a));
        free(a);
    }

    return 0;
}
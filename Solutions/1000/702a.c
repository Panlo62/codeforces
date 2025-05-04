#include <stdio.h>
#include <stdlib.h>

int subarray(int n, int *a)
{
    int curr = 1, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            curr++;
        else
        {
            if (curr > res)
                res = curr;
            curr = 1;
        }
    }

    if (curr > res)
        res = curr;
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d", subarray(n, a));

    return 0;
}
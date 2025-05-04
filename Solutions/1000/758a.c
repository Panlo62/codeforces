#include <stdio.h>
#include <stdlib.h>

int spend(int n, int *welfare)
{
    int res = 0;

    int max = welfare[0];
    for (int i = 1; i < n; i++)
    {
        if (welfare[i] > max)
        {
            res += (welfare[i] - max) * i;
            max = welfare[i];
        }
        else
        {
            res += (max - welfare[i]);
        }
    }

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *welfare = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &welfare[i]);

    printf("%d", spend(n, welfare));

    return 0;
}
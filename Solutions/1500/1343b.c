#include <stdio.h>
#include <stdlib.h>

int *make_arr(int n)
{

    int *arr = (int *)malloc(n * sizeof(int));
    if ((n / 2) & 1)
    {
        arr[0] = 0;
        return arr;
    }

    for (int i = 0; i < n / 2; i++)
    {
        arr[n / 2 + i] = 2 * i + 1;
        arr[i] = 2 * i + 2;
    }
    arr[n - 1] += n / 2;

    return arr;
}

int main()
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int *arr = make_arr(n);
        if (arr[0] == 0)
            printf("NO");
        else
        {
            printf("YES\n");
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
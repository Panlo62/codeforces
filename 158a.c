#include <stdio.h>
#include <stdlib.h>

int qualify(int n, int *arr, int k)
{
    int cnt = 0;
    int min_score = arr[k - 1];
    if (min_score == 0)
        min_score = 1;

    while (cnt < n && arr[cnt] >= min_score)
        cnt++;

    return cnt;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", qualify(n, arr, k));

    return 0;
}
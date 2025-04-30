#include <stdio.h>
#include <stdlib.h>

int change(int n, int **uniforms)
{
    int *cnt = (int *)calloc(101, sizeof(int));
    for (int i = 0; i < n; i++)
        cnt[uniforms[i][1]]++;

    int res = 0;
    for (int i = 0; i < n; i++)
        res += cnt[uniforms[i][0]];

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    int **uniforms = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        uniforms[i] = (int *)malloc(2 * sizeof(int));
        scanf("%d %d", &uniforms[i][0], &uniforms[i][1]);
    }

    printf("%d", change(n, uniforms));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int shower(int n, int **tasks, int s, int m)
{
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        if (tasks[i][0] - prev >= s)
            return 1;
        prev = tasks[i][1];
    }

    if (m - tasks[n - 1][1] >= s)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s, m;
        scanf("%d %d %d", &n, &s, &m);
        int **tasks = (int **)malloc(n * sizeof(int *));
        for (int i = 0; i < n; i++)
        {
            tasks[i] = (int *)malloc(2 * sizeof(int));
            scanf("%d %d", &tasks[i][0], &tasks[i][1]);
        }

        printf("%s\n", shower(n, tasks, s, m) ? "YES" : "NO");
    }

    return 0;
}
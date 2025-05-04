#include <stdio.h>
#include <stdlib.h>

int amazing(int n, int *points)
{
    int cnt = 0;

    int max = points[0], min = points[0];
    for (int i = 1; i < n; i++)
        if (points[i] > max)
            max = points[i], cnt++;
        else if (points[i] < min)
            min = points[i], cnt++;

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *points = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &points[i]);

    printf("%d", amazing(n, points));

    return 0;
}
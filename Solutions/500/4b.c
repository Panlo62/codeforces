#include <stdio.h>
#include <stdlib.h>

void schedules(int d, int sumTime, int **times)
{
    int sumMin = 0, sumMax = 0;
    for (int i = 0; i < d; i++)
        sumMin += times[i][0], sumMax += times[i][1];

    if (sumMin > sumTime || sumMax < sumTime)
        printf("NO");
    else
    {
        printf("YES\n");
        sumTime -= sumMin;
        for (int i = 0; i < d; i++)
        {
            int diff = times[i][1] - times[i][0];
            if (diff < sumTime)
                printf("%d ", times[i][1]);
            else
                printf("%d ", times[i][0] + sumTime);

            sumTime = (diff > sumTime) ? 0 : sumTime - diff;
        }
    }
}

int main()
{
    int d, sumTime;
    scanf("%d %d", &d, &sumTime);
    int **times = (int **)malloc(d * sizeof(int *));
    int minTime = 0, maxTime = 0;
    for (int i = 0; i < d; i++)
    {
        times[i] = (int *)malloc(2 * sizeof(int));
        scanf("%d %d", &times[i][0], &times[i][1]);
    }

    schedules(d, sumTime, times);

    return 0;
}
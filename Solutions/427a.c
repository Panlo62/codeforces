#include <stdio.h>
#include <stdlib.h>

int untreated(int n, int *events)
{
    int police = 0, crimes = 0;
    for (int i = 0; i < n; i++)
    {
        if (events[i] > 0 || police >= -events[i])
            police += events[i];
        else
        {
            crimes -= events[i] + police;
            police = 0;
        }
    }

    return crimes;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *events = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &events[i]);

    printf("%d", untreated(n, events));

    return 0;
}
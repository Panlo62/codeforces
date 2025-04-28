#include <stdio.h>
#include <stdlib.h>

int live(int n, int **rooms)
{
    int cap = 0;

    for (int i = 0; i < n; i++)
        if (rooms[i][1] - rooms[i][0] > 1)
            cap++;

    return cap;
}

int main()
{
    int n;
    scanf("%d", &n);
    int **rooms = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        rooms[i] = (int *)malloc(2 * sizeof(int));
        scanf("%d %d", &rooms[i][0], &rooms[i][1]);
    }

    printf("%d", live(n, rooms));

    return 0;
}
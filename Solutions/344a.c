#include <stdio.h>
#include <stdlib.h>

int group(int n, int *pos)
{
    int groups = 1;

    for (int i = 1; i < n; i++)
    {
        if (pos[i] != pos[i - 1])
            groups++;
    }

    return groups;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *pos = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &pos[i]);

    printf("%d", group(n, pos));

    return 0;
}
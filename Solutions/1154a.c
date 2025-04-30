#include <stdio.h>
#include <stdlib.h>

int *guess(int *values)
{
    int *nums = (int *)malloc(3 * sizeof(int));

    int maxi = 0;
    for (int i = 1; i < 4; i++)
        if (values[maxi] < values[i])
            maxi = i;

    if (maxi != 3)
    {
        int max = values[maxi];
        values[maxi] = values[3];
        values[3] = max;
    }

    for (int i = 0; i < 3; i++)
        nums[i] = values[3] - values[i];

    return nums;
}

int main()
{
    int values[4];
    scanf("%d %d %d %d", &values[0], &values[1], &values[2], &values[3]);

    int *nums = guess(values);
    printf("%d %d %d", nums[0], nums[1], nums[2]);

    return 0;
}
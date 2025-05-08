#include <stdio.h>

int banana(int *nums)
{
    for (int i = 0; i < 5; i++)
    {
        int mini = 0;
        if (nums[1] < nums[mini])
            mini = 1;
        if (nums[2] < nums[mini])
            mini = 2;

        nums[mini]++;
    }

    return nums[0] * nums[1] * nums[2];
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int nums[3];
        scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

        printf("%d\n", banana(nums));
    }

    return 0;
}
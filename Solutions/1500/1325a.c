#include <stdio.h>

void find_nums(int x)
{
    printf("%d 1\n", x - 1);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);

        find_nums(x);
    }

    return 0;
}
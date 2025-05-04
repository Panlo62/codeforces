#include <stdio.h>

int seq(int k)
{
    int num = 0;
    while (k)
    {
        num++;
        if (num % 3 != 0 && num % 10 != 3)
            k--;
    }

    return num;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        scanf("%d", &k);

        printf("%d\n", seq(k));
    }

    return 0;
}
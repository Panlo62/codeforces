#include <stdio.h>

void feeling(int n)
{
    int flag = 0;
    while (--n)
    {
        if (flag == 0)
            printf("I hate that ");
        else
            printf("I love that ");
        flag = 1 - flag;
    }

    if (flag == 0)
        printf("I hate it");
    else
        printf("I love it");
}

int main()
{
    int n;
    scanf("%d", &n);

    feeling(n);

    return 0;
}
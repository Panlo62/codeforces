#include <stdio.h>

int min(int h, int m)
{
    return (24 - h) * 60 - m;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, m;
        scanf("%d %d", &h, &m);

        printf("%d\n", min(h, m));
    }

    return 0;
}
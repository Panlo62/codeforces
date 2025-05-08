#include <stdio.h>

void convert(int h, int m)
{

    char am[3] = "AM";
    if (h > 11)
        am[0] = 'P';

    h = h % 12;
    if (h == 0)
        h = 12;

    if (h < 10)
        printf("0%d:", h);
    else
        printf("%d:", h);
    if (m < 10)
        printf("0%d", m);
    else
        printf("%d", m);
    printf(" %s\n", am);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, m;
        scanf("%d:%d", &h, &m);

        convert(h, m);
    }

    return 0;
}
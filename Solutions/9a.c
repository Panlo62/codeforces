#include <stdio.h>

void prob(int y, int w)
{
    if (y < w)
        y = w;

    int nume = 7 - y;
    if (nume == 6)
        printf("%d/1", nume / 6);
    else if (nume % 3 == 0)
        printf("%d/2", nume / 3);
    else if (nume % 2 == 0)
        printf("%d/3", nume / 2);
    else
        printf("%d/6", nume);
}

int main()
{
    int y, w;
    scanf("%d %d", &y, &w);

    prob(y, w);

    return 0;
}
#include <stdio.h>

void pairs(int x, int y, int z) {
    int a = (x > y) ? x : y;
    if (x == y && a < z) printf("NO\n");
    else {
        if (a != z) printf("NO\n");
    a = (a > z) ? a : z;
    printf("%d %d %d", )
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        pairs(x, y, z);
    }

    return 0;
}
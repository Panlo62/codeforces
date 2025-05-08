#include <stdio.h>

int screens(int x, int y)
{
    int res = 0;
    int x_screen = x / 7 + (x % 7 != 0);
    int y_screen = y / 7 + (y % 2 != 0);

    if (y_screen >= x_screen)
        return y_screen;

    
        while (x > 0 || y > 0)
    {
        res++;
        x -= 7;
        y -= 2;
    }

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        printf("%d", screens(x, y));
    }

    return 0;
}
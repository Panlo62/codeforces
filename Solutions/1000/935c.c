#include <stdio.h>

long double sqrt(long double n)
{
    long double l = 0, r = n;

    while (n - l * l > 0.00000001)
    {
        long double mid = l + (r - l) / 2;
        if (mid * mid <= n)
            l = mid;
        else
            r = mid;
    }

    return l;
}

long double euclidean_dist(long double x1, long double y1, long double x2, long double y2)
{
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

void find_ap(long double R, long double x1, long double y1, long double x2, long double y2)
{
    if (x1 == x2 && y1 == y2)
    {
        printf("%.15Lf %.15Lf %.15Lf", x1 + R / 2, y1, R / 2);
        return;
    }

    long double dist = sqrt(euclidean_dist(x1, y1, x2, y2));

    if (dist >= R)
    {
        printf("%.15Lf %.15Lf %.15Lf", x1, y1, R);
        return;
    }

    long double radius = (dist + R) / 2;

    long double slope = (y2 - y1) / (x2 - x1);
    long double root = radius / sqrt(1 + slope * slope);

    long double X1 = x2 + root;
    long double X2 = x2 - root;

    long double Y1 = y2 + slope * root;
    long double Y2 = y2 - slope * root;

    if (x1 == x2)
        X1 = x1, X2 = x1, Y1 = y2 + radius, Y2 = y2 - radius;

    if (euclidean_dist(X1, Y1, x1, y1) < euclidean_dist(x1, y1, X2, Y2))
        printf("%.15Lf %.15Lf %.15Lf", X1, Y1, radius);
    else
        printf("%.15Lf %.15Lf %.15Lf", X2, Y2, radius);
}

int main()
{
    int R, x1, y1, x2, y2;
    scanf("%d %d %d %d %d", &R, &x1, &y1, &x2, &y2);

    find_ap(R, x1, y1, x2, y2);

    return 0;
}
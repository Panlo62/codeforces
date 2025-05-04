#include <stdio.h>
#include <stdlib.h>

int *pairs(int a, int b)
{
    int *res = (int *)calloc(2, sizeof(int));

    res[0] = (a < b) ? a : b;
    res[1] = (a > b) ? a - b : b - a;
    res[1] /= 2;

    return res;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *arr = pairs(a, b);
    printf("%d %d", arr[0], arr[1]);

    return 0;
}
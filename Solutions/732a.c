#include <stdio.h>

int shovels(int k, int r)
{
    int cnt = 1;
    int price = k % 10;

    while (price != 0 && price != r)
        cnt++, price = (price + k) % 10;

    return cnt;
}

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);

    printf("%d", shovels(k, r));

    return 0;
}
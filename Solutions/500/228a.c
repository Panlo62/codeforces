#include <stdio.h>

int buy(int s1, int s2, int s3, int s4)
{
    int shoes = 0;
    if (s1 == s2)
        shoes++;

    if (s2 == s3 || s1 == s3)
        shoes++;

    if (s4 == s3 || s4 == s2 || s4 == s1)
        shoes++;

    return shoes;
}

int main()
{
    int s1, s2, s3, s4;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    printf("%d", buy(s1, s2, s3, s4));

    return 0;
}
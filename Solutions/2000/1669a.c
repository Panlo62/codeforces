#include <stdio.h>

int division(int rating)
{
    if (rating < 1400)
        return 4;
    if (rating < 1600)
        return 3;
    if (rating < 1900)
        return 2;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int rating;
        scanf("%d", &rating);
        printf("Division %d\n", division(rating));
    }

    return 0;
}
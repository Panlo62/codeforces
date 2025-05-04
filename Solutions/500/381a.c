#include <stdio.h>
#include <stdlib.h>

int *points(int n, int *cards)
{
    int i = 0, j = n - 1;
    int *res = (int *)calloc(2, sizeof(int));

    int player = 0;
    while (i <= j)
    {
        if (cards[i] > cards[j])
            res[player] += cards[i++];
        else
            res[player] += cards[j--];
        player = 1 - player;
    }

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *cards = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &cards[i]);

    int *arr = points(n, cards);
    printf("%d %d", arr[0], arr[1]);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

char *check(int n, int *arr)
{
    for (int i = 0; i < n; i++)
        if (arr[i])
            return "HARD";
    return "EASY";
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%s", check(n, arr));

    return 0;
}
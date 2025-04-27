#include <stdio.h>
#include <stdlib.h>

char *win(int n, char *result)
{
    int anton = 0;

    while (*result != '\0')
        if (*result++ == 'A')
            anton++;

    if (anton > n - anton)
        return "Anton";
    else if (anton == n - anton)
        return "Friendship";
    else
        return "Danik";
}

int main()
{
    int n;
    scanf("%d", &n);
    char *result = (char *)malloc(n * sizeof(char));
    scanf("%s", result);

    printf("%s", win(n, result));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int diff_colors(int n, char *colors)
{
    int cnt = 0;

    while (--n)
        if (colors[n - 1] == colors[n])
            cnt++;

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    char *colors = (char *)malloc(sizeof(char) * n);
    scanf("%s", colors);

    printf("%d", diff_colors(n, colors));

    return 0;
}
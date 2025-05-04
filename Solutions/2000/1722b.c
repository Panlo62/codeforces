#include <stdio.h>
#include <stdlib.h>

int color(int n, char *row1, char *row2)
{
    for (int i = 0; i < n; i++)
        if (row1[i] != row2[i] && (row1[i] == 'R' || row2[i] == 'R'))
            return 0;

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char *row1 = (char *)malloc((n + 1) * sizeof(char));
        char *row2 = (char *)malloc((n + 1) * sizeof(char));
        scanf("%s %s", row1, row2);

        printf("%s\n", color(n, row1, row2) ? "YES" : "NO");
    }

    return 0;
}
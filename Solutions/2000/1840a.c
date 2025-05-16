#include <stdio.h>
#include <stdlib.h>

void msg(int n, char *s)
{
    for (int i = 0; i < n; i++)
    {
        char curr = s[i++];
        printf("%c", curr);
        while (s[i] != curr)
            i++;
    }

    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char *s = (char *)malloc(n + 1);
        scanf("%s", s);

        msg(n, s);
    }

    return 0;
}
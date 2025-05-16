#include <stdio.h>
#include <stdlib.h>

int op(int n, int m, char *x, char *s)
{
    
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        char *x = (char *)malloc(n + 1);
        char *s = (char *)malloc(m + 1);
        scanf("%s %s", x, s);

        printf("%d", op(n, m, x, s));
    }

    return 0;
}
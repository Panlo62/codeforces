#include <stdio.h>
#include <stdlib.h>

int op(int n, char *s, char *f)
{
    int pos[2] = {0, 0};

    for (int i = 0; i < n; i++)
        if (s[i] != f[i])
            pos[s[i] - '0']++;

    return (pos[0] > pos[1]) ? pos[0] : pos[1];
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
        char *f = (char *)malloc(n + 1);
        scanf("%s", f);

        printf("%d\n", op(n, s, f));
    }

    return 0;
}
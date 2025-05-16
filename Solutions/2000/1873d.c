#include <stdio.h>
#include <stdlib.h>

int op(int n, int k, char *s)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'B')
            i += k - 1, cnt++;

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        char *s = (char *)malloc(n + 1);
        scanf("%s", s);

        printf("%d\n", op(n, k, s));
    }

    return 0;
}
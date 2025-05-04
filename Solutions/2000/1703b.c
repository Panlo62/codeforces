#include <stdio.h>
#include <stdlib.h>

int ballons(int n, char *s)
{
    int *prob = (int *)calloc(26, sizeof(int));
    int cnt = 0;

    for (int i = 0; i < n; i++)
        if (prob[s[i] - 'A']++)
            cnt++;
        else
            cnt += 2;

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char *s = (char *)malloc((n + 1) * sizeof(char));
        scanf("%s", s);

        printf("%d\n", ballons(n, s));
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int work(int n, char *s)
{
    int *unique = (int *)calloc(26, sizeof(int));

    int i = 0;
    while (i < n)
    {
        if (unique[s[i] - 'A']++)
            return 0;
        i++;
        while (s[i] == s[i - 1])
            i++;
    }

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
        char *s = (char *)malloc((n+1) * sizeof(char));
        scanf("%s", s);

        printf("%s\n", work(n, s) ? "YES" : "NO");
    }

    return 0;
}
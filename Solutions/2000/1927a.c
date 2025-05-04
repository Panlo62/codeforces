#include <stdio.h>
#include <stdlib.h>

int len(int n, char *s)
{
    int i = 0;
    while (i < n && s[i] != 'B')
        i++;

    int j = n - 1;
    while (j > i && s[j] != 'B')
        j--;

    return j - i + 1;
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

        printf("%d\n", len(n, s));
    }

    return 0;
}
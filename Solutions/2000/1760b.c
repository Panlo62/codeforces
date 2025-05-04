#include <stdio.h>
#include <stdlib.h>

int size(int n, char *s)
{
    int max = 0;

    for (int i = 0; i < n; i++)
        if (s[i] - 'a' > max)
            max = s[i] - 'a';

    return max + 1;
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

        printf("%d\n", size(n, s));
    }

    return 0;
}
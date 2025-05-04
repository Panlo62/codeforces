#include <stdio.h>
#include <stdlib.h>

int len(int n, char *s)
{
    int length = n;
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
            length -= 2;
        else
            break;

    return length;
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
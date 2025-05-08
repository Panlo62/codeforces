#include <stdio.h>
#include <stdlib.h>

int rm(int n, char *s)
{
    int x = 0, cnt = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'x')
        {
            x++;
            if (x > 2)
                cnt++;
        }
        else
            x = 0;

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    char *s = (char *)malloc((n + 1) * sizeof(char));
    scanf("%s", s);

    printf("%d", rm(n, s));

    return 0;
}
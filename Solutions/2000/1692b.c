#include <stdio.h>
#include <stdlib.h>

short len(short n, short *a)
{
    char *cnt = (char *)calloc(1e4, 1);
    short len = 0;
    for (short i = 0; i < n; i++)
    {
        if (cnt[a[i]-1] == 0)
            len++;
        cnt[a[i]-1] = 1;
    }
    
    return ((n & 1) == (len & 1)) ? len : len - 1;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        short n;
        scanf("%hd", &n);
        short *a = (short *)malloc(n * sizeof(short));
        for (int i = 0; i < n; i++)
            scanf("%hd", &a[i]);

        printf("%hd\n", len(n, a));
    }

    return 0;
}
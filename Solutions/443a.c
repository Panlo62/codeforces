#include <stdio.h>

int unique()
{
    int res = 0;

    int cnt[26];
    for (int i = 0; i < 26; i++)
        cnt[i] = 0;

    char c = fgetc(stdin);
    while ((c = fgetc(stdin)) != '}')
        if (c != ',' && c != ' ')
            if (cnt[c - 'a']++ == 0)
                res++;

    return res;
}

int main()
{
    printf("%d", unique());
    return 0;
}
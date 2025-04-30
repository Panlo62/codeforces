#include <stdio.h>

char *make(char *guest, char *host, char *letters)
{
    int req = 0;
    int *cnt = (int *)calloc(26, sizeof(int));

    while (*guest != '\0')
        cnt[*guest++ - 'A']++, req++;

    while (*host != '\0')
        cnt[*host++ - 'A']++, req++;

    while (*letters != '\0')
        if (cnt[*letters - 'A'] > 0)
            cnt[*letters++ - 'A']--, req--;
        else
            return "NO";

    return (req) ? "NO" : "YES";
}

int main()
{
    char guest[101], host[101], letters[101];
    scanf("%s %s %s", guest, host, letters);

    printf("%s", make(guest, host, letters));

    return 0;
}
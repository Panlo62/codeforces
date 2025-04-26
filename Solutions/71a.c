#include <stdio.h>

void *convert()
{
    char s[100];
    scanf("%s", s);
    char *new_s = s;
    int cnt = 0;
    while (*new_s++ != '\0')
        cnt++;

    if (cnt <= 10)
        printf("%s\n", s);
    else if (cnt == 11)
        printf("%c%d%c\n", s[0], 9, s[cnt - 1]);
    else
        printf("%c%d%d%c\n", s[0], (cnt - 2) / 10, (cnt - 2) % 10, s[cnt - 1]);
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        convert();
    }

    return 0;
}
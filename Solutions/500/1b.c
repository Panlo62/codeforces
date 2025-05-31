#include <stdio.h>
#include <stdlib.h>

void convert_to_num(char *s, int len_c)
{
    int col = 0;
    for (int i = 0; i < len_c; i++)
        col = col * 26 + s[i] - 'A' + 1;

    printf("R%sC%d\n", s + len_c, col);
}

char *convert_from_num(char *s, int len_num)
{
    int row = 0, col = 0;
    for (int i = 1; i < len_num; i++)
        row = row * 10 + (s[i] - '0');

    for (int i = len_num + 1; s[i] != '\0'; i++)
        col = col * 10 + (s[i] - '0');

    char col_str[6];
    col_str[5] = '\0';
    int i = 5;
    while (col)
    {
        col--;
        col_str[--i] = col % 26 + 'A';
        col /= 26;
    }

    int j = 0;
    while (j != i && i != 7)
        col_str[j++] = col_str[i++];

    printf("%s%d\n", col_str, row);
}

void convert(char *s)
{
    char *ptr = s;
    while (*ptr < '0' || *ptr > '9')
        ptr++;

    int len_c = ptr - s;

    while (*ptr != '\0' && *ptr >= '0' && *ptr <= '9')
        ptr++;

    if (*ptr == '\0')
        convert_to_num(s, len_c);
    else
        convert_from_num(s, ptr - s);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[17];
        scanf("%s", s);

        convert(s);
    }

    return 0;
}
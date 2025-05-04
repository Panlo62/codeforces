#include <stdio.h>

int compare(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        int d1, d2;
        if (*str1 >= 'A' && *str1 <= 'Z')
            d1 = *str1 - 'A';
        else
            d1 = *str1 - 'a';

        if (*str2 >= 'A' && *str2 <= 'Z')
            d2 = *str2 - 'A';
        else
            d2 = *str2 - 'a';

        if (d1 > d2)
            return 1;

        if (d1 < d2)
            return -1;

        str1++;
        str2++;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    printf("%d", compare(str1, str2));

    return 0;
}
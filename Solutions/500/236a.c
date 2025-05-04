#include <stdio.h>

char *check(char *name)
{
    int cnt = 0;
    char unique[26];
    for (int i = 0; i < 26; i++)
        unique[i] = 0;

    while (*name != '\0')
        unique[*name++ - 'a'] = 1;

    for (int i = 0; i < 26; i++)
        if (unique[i] == 1)
            cnt++;

    if (cnt & 1)
        return "IGNORE HIM!";
    else
        return "CHAT WITH HER!";
}

int main()
{
    char name[100];
    scanf("%s", name);

    printf("%s", check(name));

    return 0;
}
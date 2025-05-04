#include <stdio.h>

char *correct(char *word)
{
    int lower = 0, cnt = 0;
    char *w = word;
    while (*w != '\0')
    {
        if (*w++ >= 'a')
            lower++;
        cnt++;
    }

    if (cnt > lower + lower)
    {
        for (int i = 0; i < cnt; i++)
            if (word[i] >= 'a')
                word[i] = word[i] - 'a' + 'A';
    }
    else
    {
        for (int i = 0; i < cnt; i++)
            if (word[i] < 'a')
                word[i] = word[i] + 'a' - 'A';
    }

    return word;
}

int main()
{
    char word[100];
    scanf("%s", word);

    printf("%s", correct(word));

    return 0;
}
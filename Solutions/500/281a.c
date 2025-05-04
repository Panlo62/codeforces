#include <stdio.h>

char *capitalize(char *word)
{
    if (word[0] >= 'a' && word[0] <= 'z')
        word[0] = word[0] - 'a' + 'A';
    return word;
}

int main()
{
    char word[1000];
    scanf("%s", word);

    printf("%s", capitalize(word));

    return 0;
}
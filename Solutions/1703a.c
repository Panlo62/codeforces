#include <stdio.h>
#include <stdlib.h>

int check(char *s)
{
    if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 's' || s[2] == 'S'))
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char *s = (char*)malloc(3*sizeof(char));
        scanf("%s", s);
        printf("%s\n", (check(s)) ? "YES" : "NO");
    }

    return 0;
}
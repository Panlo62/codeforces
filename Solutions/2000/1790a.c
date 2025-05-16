#include <stdio.h>

int digit(char *n)
{
    const char PI[31] = "314159265358979323846264338327";
    for (int i = 0; i < 30; i++)
        if (n[i] != PI[i])
            return i;

    return 30;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char n[31];
        scanf("%s", n);

        printf("%d\n", digit(n));
    }

    return 0;
}
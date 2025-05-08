#include <stdio.h>

char *winner(int n)
{
    if (n & 1)
        return "Kosuke";
    return "Sakurako";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%s\n", winner(n));
    }

    return 0;
}
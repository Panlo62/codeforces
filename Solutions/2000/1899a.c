#include <stdio.h>

int game(int n)
{
    if (n % 3)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%s\n", game(n) ? "First" : "Second");
    }
    return 0;
}
#include <stdio.h>

int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }

int game(int s1, int s2, int s3, int s4)
{
    if (max(s1, s2) < min(s3, s4) || min(s1, s2) > max(s3, s4))
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int s1, s2, s3, s4;
        scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

        printf("%s\n", game(s1, s2, s3, s4) ? "YES" : "NO");
    }

    return 0;
}
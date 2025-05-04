#include <stdio.h>

int lucky(char *num)
{
    return num[0] + num[1] + num[2] == num[3] + num[4] + num[5];
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char num[7];
        scanf("%s", num);

        printf("%s\n", (lucky(num)) ? "YES" : "NO");
    }

    return 0;
}
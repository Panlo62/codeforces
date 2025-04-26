#include <stdio.h>
#include <stdlib.h>

int compute(int n, char **arr)
{
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == '+' || arr[i][1] == '+' || arr[i][2] == '+')
            x++;
        else
            x--;
    }

    return x;
}

int main()
{
    int n;
    scanf("%d", &n);

    char **arr = (char **)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * 3);
        scanf("%s", arr[i]);
    }

    printf("%d", compute(n, arr));
    return 0;
}
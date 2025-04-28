#include <stdio.h>

char *rearrange(int n, int k, char *gen)
{
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    char *gen = (char *)malloc(n * sizeof(char));
    scanf("%s", gen);

    printf("%s", rearrange(n, k, gen));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void rearrange(int n, int k, char *gen)
{
    for (int i = 0; i < k; i++)
        for (int j = 1; j < n; j++)
            if (gen[j - 1] == 'B' && gen[j] == 'G')
                gen[j - 1] = 'G', gen[j++] = 'B';
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    char *gen = (char *)malloc(n * sizeof(char));
    scanf("%s", gen);

    rearrange(n, k, gen);
    printf("%s", gen);

    return 0;
}
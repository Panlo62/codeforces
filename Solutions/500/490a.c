#include <stdio.h>
#include <stdlib.h>

void print(int *t, int n)
{
    printf("Arr: ");
    for (int i = 0; i < n; i++)
        printf("%d ", t[i]);
    printf("\n");
}

int **make_teams(int *n, int *t)
{
    int i = 0, j = 0, k = *n, j_ind = 1;
    while (j < k)
    {
        if (t[j] == 1)
        {
            t[j] = t[i];
            t[i] = j_ind;
            i++, j++, j_ind = j + 1;
        }
        else if (t[j] == 2)
        {
            t[j] = j_ind;
            j++;
            j_ind = j + 1;
        }
        else
        {
            t[j] = t[--k];
            t[k] = j_ind;
            j_ind = k + 1;
        }
    }

    *n = (i < *n - k) ? i : *n - k;
    *n = (*n < k - i) ? *n : k - i;

    int **teams = (int **)malloc(*n * sizeof(int *));
    for (int ind = 0; ind < *n; ind++)
    {
        teams[ind] = (int *)malloc(3 * sizeof(int));
        teams[ind][0] = t[--i];
        teams[ind][1] = t[--j];
        teams[ind][2] = t[k++];
    }

    return teams;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *t = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &t[i]);

    int **teams = make_teams(&n, t);
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", teams[i][0], teams[i][1], teams[i][2]);

    return 0;
}
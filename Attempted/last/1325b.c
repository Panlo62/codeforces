#include<stdio.h>
#include<stdlib.h>

int lis(int n, int *a)
{
    int max_lic = 0, curr = 0;
    for (int i = 1; i < n; i++) {
        if ()
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n*sizeof(int));
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        printf("%d", lis(n, a));
    }

    return 0;
}
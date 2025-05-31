#include <stdio.h>

int divide(int w) { return w % 2 == 0 && w != 2; }

int main()
{
    int w;
    scanf("%d", &w);
    printf("%s", divide(w) ? "YES" : "NO");
    return 0;
}
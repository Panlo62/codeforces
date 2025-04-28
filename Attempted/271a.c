#include <stdio.h>

int distinct(int y)
{
    int o = y%10, t = (y/10)%10, h = (y/100)%10, th = y/1000;
    

}

int main()
{
    int y;
    scanf("%d", &y);

    printf("%d", distinct(y));

    return 0;
}
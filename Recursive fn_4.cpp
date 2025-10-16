#include <stdio.h>

int main()
{
    int recodd(int);
    recodd(10);
}
int recodd(int n)
{
    if(n == 0)
        return 0;
    else
        recodd(n-1);
        printf("%d\n",n*2 - 1);
}

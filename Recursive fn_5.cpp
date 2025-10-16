#include <stdio.h>

int main()
{
    int recfac(int);
    printf("%d",recfac(5));
}
int recfac(int n)
{
    return((n)?(n * recfac(n-1)):1);
}

#include <stdio.h>

int main()
{
    int recsum(int);
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The sum of digits is %d",recsum(n));
}
int recsum(int n)
{
    if(n)
    {
    int r = n % 10;
    return r + recsum(n/10);
    }
    else
        return 0;
}

#include <stdio.h>
int main()
{
    /* Write a program to print sum of first n odd numbers.*/
    int n,sum;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i = 1; i <= n;i += 2)
    {
        sum += i;
    }
    printf("The sum of first %d odd numbers is %d",n,sum);
}

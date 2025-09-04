#include <stdio.h>
int main()
{
    /* Write a program to print sum of first n natural numbers. */
    int n,sum;
    printf("Enter the value of n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural numbers is %d",n,sum);
}

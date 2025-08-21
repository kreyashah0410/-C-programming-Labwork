#include <stdio.h>
int main()
{
    /* This program shows if a given number is divisible by 7 */
    int a;
     printf("Enter a number.");
     scanf("%d",&a);
     if (a % 7 == 0)
        printf("%d is divisible by 7.\n",a);
     else
     {
        printf("%d is not divisible by 7.\n",a);
     }
}

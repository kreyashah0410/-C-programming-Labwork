#include <stdio.h>

int main()
{
    int printno(int);
    printno(10);
}
int printno(int n)
{
    if(n == 0)
       return 0;
    else
   {
       printno(n-1);
       printf("%d\n",n);
   }
}

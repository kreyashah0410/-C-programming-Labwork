#include <stdio.h>

int main()
{
    int printno(int);
    printno(1);
}
int printno(int n)
{
    if(n == 11)
       return 0;
    else
   {
       printno(n+1);
       printf("%d\n",n);
   }
}

#include <stdio.h>

int main()
{
  int n,i;
  char flag = 'y';
  printf("Enter a number.\n");
  scanf("%d",&n);
  for(i=2 ; i<n ; i++)
  {
      if(n % i == 0)
      {
          flag = 'n';
          printf("%d is not a prime number.",n);
          break;
      }
  }
  if(flag == 'y')
    printf("%d is a prime number.",n);
}

#include <stdio.h>
int main()
{
    int i;
    printf("Enter choice");
    scanf("%d", &i);
    switch (i)
    {
        case 1:
            {
                int a,b;
            printf("Enter two numbers.");
            scanf("%d %d",&a,&b);
            printf("The addition of %d and %d is %d",a,b,a+b);
            break;
            }
        case 2:
            {
                int c,d;
             printf("Enter two numbers.");
             scanf("%d %d",&c,&d);
             printf("The multiplication of %d and %d is %d",c,d,c*d);
             break;
            }
        case 3:
            {
                int e;
                printf("Enter a number");
                scanf("%d",&e);
                if (e % 2 == 0)
                {
                    printf("%d is even",e);
                }
                else
                {
                    printf("%d is odd",e);
                };
                break;
            }
        case 4:
            {
              int f;
              printf("Enter a number");
              scanf("%d",&f);
              if (f % 5 == 0)
              {
                  printf("%d is divisible by 5",f);
              }
              else
              {
                  printf("%d is not divisible by 5",f);
              };
              break;
            }
        default: printf("INVALID CHOICE.\n");
    }
}

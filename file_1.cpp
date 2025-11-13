#include <stdio.h>
#include <conio.h>

int main()
{
    FILE*fpw = NULL;
    char ch;
    printf("Enter your details.At the end, put # sign.\n");
    fpw =
    fopen("my1stfl.dat","a");
    ch = fgetc(stdin);
    while (ch != '#')
    {
        fputc(ch,fpw);
        ch = fgetc(stdin);
    };
    fclose(fpw);
    printf("\n The data has been successfully written within file.\n");
};

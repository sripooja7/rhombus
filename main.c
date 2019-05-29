/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,row,space,col;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(space=0;space<row;space++)
        {
            printf(" ");
        }
        for(col=0;col<n;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

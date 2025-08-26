/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    struct ponto{
    int x;
    int y;
    };
    struct ponto p1,p2;
    p1.x=10;
    p1.y=20;
    p2.x = p1.x + 5;
    p2.y = p2.x + 5;
    
    printf("%d",p1.x);
    printf("%d",p1.y);
    printf("%d",p2.x);
    printf("%d",p2.y);
    return 0;
}
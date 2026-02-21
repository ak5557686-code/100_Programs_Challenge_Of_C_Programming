//Purpose: The following program inputs thre numbers and displays wether all numbers are equal or not using nested-if statement.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,c;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if(a==b)
    {
        if(a==c)
            printf("Numbers are equal");
        else
            printf("Numbers are different");
    }
    else
    printf("Numbers are different");
    getch();
}
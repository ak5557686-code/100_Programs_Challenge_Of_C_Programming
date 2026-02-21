//Purpose: The following program inputs two numbers from the user and displays the result of the first raised to the power of the second number.
#include <stdio.h>
#include <conio.h>
int main(){
    ;
    int a,b,c,r;
    c=1;
    r=1;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    do{
        r=r*a;
        c++;
    }while(c<=b);
    printf("The square of %d is %d",a,r);
    getch();
}
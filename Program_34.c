//Purpose: The following program inputs two numbers and finds if second number is square of the first number.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if(a*a==b)
    printf("Second number is the square of first number");
    getch();
}
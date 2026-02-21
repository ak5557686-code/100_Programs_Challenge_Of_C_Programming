//Purpose: The following program inputs two numbers and finds wether these numbers are equal or not using if-else structure.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b;
    printf("ENter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if(a==b)
    printf("Numbers are equal");
    else
    printf("Numbers are unequal");
    getch();
}
//Purpose: The following program inputs a number from the user and finds wether it is positive, negative or zero.
#include <stdio.h>
#include <conio.h>
int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    if(a>0)
    printf("You entered a positive number");
    else if(a<0)
    printf("You entered a negative number");
    else
    printf("You entered zero");
    getch();
}
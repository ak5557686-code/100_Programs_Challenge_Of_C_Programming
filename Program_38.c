//Purpose: The following program inputs a number and dislays the square root of the number if the number is positive otherwise displays 'Invalid input'.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int a=0;
    double sqroot=0.0;
    printf("Enter any number");
    scanf("%d",&a);
    if(a>0){
    sqroot=sqrt(a);
    printf("Square root of the %d is %.2f",a,sqroot);
     }
     else
    printf("Invalid input");
    getch();
}
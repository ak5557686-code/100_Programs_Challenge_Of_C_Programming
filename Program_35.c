//Purpose: A program that input three numbers and displays maximum number.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,c,max;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Eneter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    printf("The maximum number is %d",max);
    getch();
}
//Purpose: The following program displays table of a number using for loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    printf("%d*%d=%d\n",a,b,a*b);
    getch();
}
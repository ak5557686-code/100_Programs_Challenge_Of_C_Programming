//Purpose: The following program inputs two numbers in main function, passes these numbers to a function and the function displays the maximum number.
#include <stdio.h>
#include <conio.h>
void max(int a, int b){
    if(a>b)
    printf("Maximum number is %d.",a);
    else
    printf("Maximum number is %d",b);
}
void main(){
    int x,y;
    printf("Enter vlaue of x:");
    scanf("%d",&x);
    printf("Enter vlaue of y:");
    scanf("%d",&y);
    max(x,y);
    getch();
}
//Purpsoe: the following program inputs two numbers in main function and passes the number to a function.
//The fuction then returns the maximum number back to the main function where the returned number is displayed.
#include <stdio.h>
#include <conio.h>
int max(int a,int b){
    if(a>b)
    return a;
    if(b>a)
    return b;
}
int main(){
int x,y,m;
printf("Enter first number:");
scanf("%d",&x);
printf("Enter second number:");
scanf("%d",&y);
m=max(x,y);
printf("Maximum number is %d.",m);
getch();
}
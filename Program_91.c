//Purpsoe: the following program inputs two numbers in main function and passes them to a function. 
//The function then displays the first number raised to the power of second.
#include <stdio.h>
#include <conio.h>
void power(int x,int y){
    int i,p;
    p=1;
    for(i=1; i<=y; i++){
        p*=x;
    }
    printf("%d raised to the power %d is %d.",x,y,p);
}
int main(){
    int m,n;
    printf("Enter first number:");
    scanf("%d",&m);
    printf("Enter second number:");
    scanf("%d",&n);
    power(m,n);
    getch();
}
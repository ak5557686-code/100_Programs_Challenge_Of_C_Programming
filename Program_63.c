//Purpose: The following program displays the sum of the series (1+1/2+1/4+1/6=............+1/100) using while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    float n,sum;
    n=2.0;
    sum=1.0;
    while(n<100){
        sum=sum+1.0/n;
        n=n+2;
    }
    printf("Sum is %f",sum);
    getch();
}
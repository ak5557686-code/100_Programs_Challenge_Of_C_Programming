//Purpose: The following program displays the sum of the series (1+1/3+1/5+1/5+''''''''+1/99) using do-while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    float a,sum;
    a=1.0;
    sum=3.0;
    do{
        a=a+1.0/sum;
        sum=sum+2;
    }while(sum<=99);
    printf("The sum of the series is %f",a);
    getch();
}
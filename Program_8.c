//Purpose: The following program explains the difference of postfix decrement operator and prefix decrement operator used as part of a larger expression.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,x,y;
    a=b=x=y=0;
    b=a--;
    y=--x;
   printf("a=%d\nb=%d\nx=%d\ny=%d\n",a,b,x,y);
   getch();
}
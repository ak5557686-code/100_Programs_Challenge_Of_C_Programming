 //Purpose: The following program explains the difference between postfix increment operator and prefix increment operator.
#include <stdio.h>
#include <conio.h>
int main(){
   int a,b,x,y;
   a=b=x=y=0; 
   printf("a=%d\nb=%d\nx=%d\ny=%d\n",a,b,x,y);
   a++;
   b=a;
   ++x;
   y=x;
   printf("a=%d\nb=%d\nx=%d\ny=%d",a,b,x,y);
   getch();
}
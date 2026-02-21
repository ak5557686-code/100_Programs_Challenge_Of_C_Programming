//Purpose: The following program displays the table of a number in reverse order.
#include <stdio.h>
#include <conio.h>
int main(){
int a,b;
printf("Enter the number:");
scanf("%d",&a);
for(b=10;b>=1;b--)
printf("%d*%d=%d\n",a,b,a*b);
getch();
}
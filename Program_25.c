//Purpose: The following program inputs two numbers, exchange their values and displays their values before and after exchange.
#include <stdio.h>
#include <conio.h>
int main(){
  int x,y,temp;
  printf("Enter 1st number:");
  scanf("%d",&x);
  printf("Enter 2nd number:");
  scanf("%d",&y);
  printf("Value of x before interchange=%d\n",x);
  printf("Value of y before interchage=%d\n",y);
  temp=x;
  x=y;
  y=temp;
  printf("Value of x after interchange=%d\n",x);
  printf("Value of after interchange =%d",y);
  getch();
}
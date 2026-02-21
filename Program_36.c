//Purpose: The following program inputs a number and fids wether it is even or odd using if=else structure.
#include <stdio.h>
#include <conio.h>
int main(){
   int a;
   printf("Enter first number:");
   scanf("%d",&a);
   if(a%2==0)
   printf("Even number");
   else
   printf("Odd number");
   getch();
}
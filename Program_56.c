//Purpose: The following program inputs a number and displays wether it is divisible by three or not by using conditional operator.
#include <stdio.h>
#include <conio.h>
int main(){
 int a;
 printf("Enter any number");
 scanf("%d",&a);
 a%3==0? printf("%d is divisible by 3",a):printf("%d is not divisible by 3");
 getch();
}
//Purpsoe: the following program inputs a number in global variable. It call a function that myltiplies the global variable by 2.
//The main function then displays the value of global variable.
#include <stdio.h>
#include <conio.h>
int g;
void fun(){
    g= g*2;
}
void main(){
   printf("Enter a number:");
   scanf("%d",&g); 
   printf("Value of g before function call: %d\n",g);
   fun();
   printf("Value of g after function call:%d",g);
   getch();
}
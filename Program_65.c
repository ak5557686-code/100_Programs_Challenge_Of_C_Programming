//Purpose: The following program displays back couting from 10 to 1 using do-while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n=10;
    do{
   printf("%d\n",n);
   n--;
}
while(n>=1);
getch();
}
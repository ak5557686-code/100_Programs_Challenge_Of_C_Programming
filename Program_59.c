//Purpose: The following program displays first five numbers and their squares using while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int x=1;
    while(x<=5){
        printf("%d\t%d\n",x,x*x);
        x++;
    }
    getch();
}
//Purpose: The following program displays first ten odd numbers using do-while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n=1;
    do{
        if(n%2!=0)
        printf("%d\n",n);
        n++;
    }while(n<=20);
    getch();
}
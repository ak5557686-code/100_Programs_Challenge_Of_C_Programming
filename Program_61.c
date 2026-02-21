//Purpose: The following program inputs a number from the user and displays the table of that number using whilw loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n,t;
    t=1;
    printf("enter number");
    scanf("%d",&n);
    while(t<=10){
        printf("%d*%d=%d\n",n,t,n*t);
        t++;
    }
    getch();
}
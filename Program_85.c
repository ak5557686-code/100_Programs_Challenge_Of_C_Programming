// Purpose: The following program inputs a positive integer number number from the key board and displays it in reverse order.
#include <stdio.h>
#include <conio.h>
int main(){
    int x,i,r;
    printf("Enter any integer:");
    scanf("%d",&x);
    r=0;
    for(i=x; i!=0; i=i/10){
        r=10*r+i%10;
    }
    printf("Actual numbre is %d.\n",x);
    printf("Reverse number is %d.",r);
    getch();
}
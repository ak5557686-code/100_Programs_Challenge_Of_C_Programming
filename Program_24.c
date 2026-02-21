//Purpose: The following program gets a 3-digit number from the user and displays it in reverse order.
#include <stdio.h>
#include <conio.h>
int main(){
    int n,a,b;
    printf("Enter # digit Number:");
    scanf("%d",&n);
    a=n/100;
    n=n%100;
    b=n/10;
    n=n%10;
    printf("Numbers in reverse order are:%d%d%d",n,b,a);
    getch();
}
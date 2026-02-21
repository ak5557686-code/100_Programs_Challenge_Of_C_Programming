//Purpose: The following program inputs a number from the user and displays the factorial of tha numbers using for loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int f,n,c;
    f=1;
    printf("Enter any number:");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    f=f*c;
    printf("Factorial of %d is %d",n,f);
    getch();
}
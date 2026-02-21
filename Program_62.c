//Purpose: The following program inputs a number from the user and displays the factorial of that number using while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n,f,c;
    c=1;
    f=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(c<=n){
        f=f*c;
        c++;
    }
    printf("Factorial of %d is %d",n,f);
    getch();
}
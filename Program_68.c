//Purpose: The following program inputs a number from the user and displays the factorial of that number using do-while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n,f,c;
    f=1;
    c=1;
    printf("Enter the number:");
    scanf("%d",&n);
    do{
        f=f*c;
        c++;
    }while(c<=n);
    printf("Factorial of the number is %d",f);
    getch();
}
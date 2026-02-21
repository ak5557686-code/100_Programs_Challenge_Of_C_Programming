//Purpose: The following program inputs starting and ending number from the user and displays all the odd numbers between the starting and the ending number.
#include <stdio.h>
#include <conio.h>
int main(){
    int s,e,n;
    printf("Enter the starting number:");
    scanf("%d",&s);
    printf("Enter the second number:");
    scanf("%d",&e);
    n=s;
    do{
        if(n%2!=0){
            printf("%d\n",n);
        }
        n++;
    }while(n<=e);
    getch();
}
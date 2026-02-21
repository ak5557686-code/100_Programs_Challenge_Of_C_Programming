//Purpose: The following program inputs starting and ending number from the user and displays all the even numbers in the given range.
#include <stdio.h>
#include <conio.h>
int main(){
    int s,e,n;
    printf("Enter starting number:");
    scanf("%d", &s);
    printf("Enter ending number");
    scanf("%d", &e);
    n=s;
    while(n<=e){
        if(n%2==0)
        printf("%d\n",n);
        n++;
    }
    getch();
}
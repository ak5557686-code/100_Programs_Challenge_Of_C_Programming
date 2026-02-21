//Purpose: The following program inputs a number and displays wether it is even or odd by ucing logical operator '!'.
#include <stdio.h>
#include <conio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(!(a%2==0))
        printf("%d is an odd number",a);
    else
        printf("%d is an even number",a);
        getch();
}
//Purpsoe: the following program accepts two numbers from the user & displays wether those numbers are equal or not using a function.
#include <stdio.h>
#include <conio.h>
void check(int x,int y){
    if(x==y)
        printf("Numnbers are equal.");
    else
        printf("Numbers are different.");
}
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    check(a,b);
    getch();
}
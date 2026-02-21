//Purpose: The following program inputs a number in main function, passes that number to a function and the function then displays the factorial of that number.
#include <stdio.h>
#include <conio.h>
void fact(int x){
    int i;
    long fact;
    fact=1;
    for(i=1; i<=x; i++)
    fact*=i;
    printf("Factorial of %d is %d.",x,fact);
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    fact(a);
    getch();
}
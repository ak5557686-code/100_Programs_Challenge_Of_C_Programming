//Purpose: The following program displays the sum of the squares of integers from 1 to n. Where n is a positive value entered by the user. 
#include <stdio.h>
#include <conio.h>
int main(){
    int n,c;
    long int sum;
    sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(c=1; c<=n; c++){
        sum=sum+(c*c);
    }
    printf("Sum is: %d",sum);
    getch();
}
//Purpose: The following program inputs a year and finds wether it is a leap year or not using if-else structure.
#include <stdio.h>
#include <conio.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");
    getch();
}
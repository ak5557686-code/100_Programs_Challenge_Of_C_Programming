//Purpose: The following program  Calculates electricity bill according toi given conditions.
#include <stdio.h>
#include <conio.h>
int main(){
    int units;
    float bill;
    printf("Enter your units consumed:");
    scanf("%d",&units);
    if(units>500)
        bill=units*7;
    else if(units>300 && units<500)
        bill=units*5;
    else 
        bill=units*2;
    bill=bill+150;
    if(bill>2000)
      bill=bill+(bill*5.0/100.0);
    printf("Your total bill is %.2f",bill);
    getch();
}
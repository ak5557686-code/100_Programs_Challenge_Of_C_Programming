//Purpsoe: the following program accepts weight in pounds and converts it into kilograms by using function.
#include <stdio.h>
#include <conio.h.>
float kilo(float pound){
    return pound/2.205;
}
int main(){
float k,p;
printf("Enter weight in pounds:");
scanf("%f",&p);
k=kilo(p);
printf("%.2f Pounds = %.2f Kilograms.",p,k);
getch();
}
//Purpose: The following program gets temperature from the user in Celcius and converts it into Farenheit using the formula '9/5*C+32'.
#include <stdio.h>
#include <conio.h>
void main(){
    float cel,faren;
    printf("Enter temperature in celcius");
    scanf("%f",&cel);
    faren=9.9/5.0*cel+32;
    printf("Temperatur in Farenheit=%f",faren);
    getch();
}
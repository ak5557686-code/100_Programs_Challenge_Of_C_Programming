//Purpose: The following program converts distance from kilometers into meters.
#include <stdio.h>
#include <conio.h>
int main(){
    float k;
    double meters;
    printf("Enter distance in kilometers");
    scanf("%f",&k);
    meters=k*1000;
    printf("Distance in meters is :%.2f",meters);
    getch();
}
//Purpose: The following program radius of sphere from usesr. Calculates its surface area and volume using the formula.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    float r,area,cir;
    printf("Enter rafdius:");
    scanf("%f",&r);
    area=4*3.14*r*r;
    cir=4/3*3.14*r*r*r;
    printf("Area=%2.2f\n",area);
    printf("Circumference=%2.2f",cir);
    getch();
}
//Purpose: The following program inputs radius of a circle and calculates its area. It store the value of PI in a constant by using define directive.
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14
int main(){
    float r,area,cir;
    printf("Enter radius:");
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area=%2.2f\n",area);
    cir=2*PI*r;
    printf("Cicumference=%2.2f",cir);
    getch();
}
//Purpose: The following program calculates the area of a triangles when three sides a,b,c of the triangle are given 
//using the appropriate statements to input the values of a,b,c from the keyboard.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    float a,b,c;
    double s,Area;
    printf("Enter 1st side:");
    scanf("%f",&a);
    printf("Enter 2nd side:");
    scanf("%f",&b);
    printf("Enter third side:");
    scanf("%f",&c);
    s=(a+b+c)/2.0;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is:%2.2f",Area);
    getch();
}
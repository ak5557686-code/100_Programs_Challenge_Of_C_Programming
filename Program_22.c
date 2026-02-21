//Purpose: The following program inputs base and height from the user and calculates the area of a triangle using the formula 'Area=0.5*base*height'.
#include <stdio.h>
#include <conio.h>
int main(){
    float base,height;
    double Area;
    printf("Enter Base:");
    scanf("%f",&base);
    printf("Enter Height:");
    scanf("%f",&height);
    Area=0.5*base*height;
    printf("Area Of Triangle is:%5.2f",Area);
    getch();
}
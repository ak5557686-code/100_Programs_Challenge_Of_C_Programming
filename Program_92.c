//Purpsoe: the following program inputs base and height in main function and passes them to a function.
//The finds the area of the triangle and returns it to the main function where it is displayed on the screen.
#include <stdio.h>
#include <conio.h>
float Area(int Base, int Height){
    float a=0.5*Base*Height;
    return a;
}
int main(){
    int base,height;
    float area;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter height:");
    scanf("%d",&height);
    area=Area(base,height);
    printf("Area of the triangle is: %.2f.",area);
    getch();
}
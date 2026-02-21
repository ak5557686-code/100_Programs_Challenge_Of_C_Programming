//Purpsoe: the following program uses a function to calculate the circumference of the circle and returns the vlaue to the main function in C.
#include <stdio.h>
#include <conio.h>
#define PI 3.141
float circ(float r){
    float a;
    a=2.0*PI*r;
    return a;
}
int main(){
    float rad;
    printf("Enter radius:");
    scanf("%f",&rad);
    printf("Circumference=%.2f.",circ(rad));
    getch();
}
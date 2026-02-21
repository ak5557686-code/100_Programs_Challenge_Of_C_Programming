//Purpose: The following program inputs radius. It calculates area if user enters 1 as choice. It calculate circumference if the user enters 2 as choice.
#include <stdio.h>
#include <conio.h>
int main(){
    float rad,area,circ;
    int choice;
    printf("Enter radius");
    scanf("%f",&rad);
    printf("Enter 1 for area and 2 for circumference");
    scanf("%d",&choice);
    if(choice==1)
        {area=rad*rad*3.14;
        printf("Area is %f",area);}
    else if(choice==2)
        {circ=2*3.14*rad;
        printf("circumference is %f",circ);}
    else 
        printf("Invalid choice");
        getch();
}
//Purpose: The following program inputs a value and type of conversion, then output the value after conversion.
#include <stdio.h>
#include <conio.h>
int main(){
    float value;
    char con;
    printf("Enter conversion type\n");
    printf("C for centimeters\n");
    printf("L for liters\n");
    printf("K for kilometers\n");
    printf("G for kilograms\n");
    scanf("%c",&con);
    printf("Enter a value:");
    scanf("%f",&value);
    switch(con)
    {
        case 'C':
        case 'c':
            printf("Value:%.2fcms",value*2.54);
            break;
        case 'K':
        case 'k':
            printf("Value:%.2fkms",value*1.609);
            break;
        case 'L':
        case 'l':
            printf("Value:%.2flrs",value*3.785);
            break;
        case 'G':
        case 'g':
            printf("Value:%.2fgms",value*453.6);
            break;
    }
    getch();
}
//Purpose: The following program divides two float variables and finds the remainder using explicit casting.
#include <stdio.h>
#include <conio.h>
int main(){
    float a=10.3,b=5.4;
    int c=(int)a%(int)b;
    int d=(int)a/(int)b;
    printf("Remainder is %d\n",c);
    printf("Dividor is %d",d);
    getch();
}
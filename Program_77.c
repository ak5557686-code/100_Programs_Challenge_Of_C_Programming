//Purpose: The following program displays a table of equivalent temperatures in Farenheit and Celcius from 50F to 100f.
#include <stdio.h>
#include <conio.h>
int main(){
int f;
float c;
printf("Farenheit\tCelcius\n");
for(f=50;f<=100;f=f+5)
{
    c=5.0/9.0*(f-32);
printf("%d\t%.2f\n",f,c);
}
getch();
}
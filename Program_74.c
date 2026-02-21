//Purpose: The following program displays first ten numbers and their average using for loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n,sum;
    float avg;
    sum=0;
    n=1;
    for(n=1;n<=10;n++)
    {
    printf("%d\n",n);
    sum=sum+n;
    }
    avg=sum/10.0;
    printf("Average:%.2f",avg);
    getch();
}
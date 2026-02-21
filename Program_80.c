//Purpose: The following program inputs a table number and required length of table and diplays the table of the number using for loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,length,c;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the lenght of the table:");
    scanf("%d",&length);
    for(c=1;c<=length;c++)
    printf("%d*%d=%d\n",a,c,a*c);
    getch();
}
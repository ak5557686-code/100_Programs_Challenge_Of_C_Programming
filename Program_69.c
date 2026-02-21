//Purpose: The following program inputs a number from the user and displays the table of that number using do-while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b;
    b=1;
    printf("Enter the number:");
    scanf("%d",&a);
    do{
        printf("%d*%d=%d\n",a,b,a*b);
        b++;
    }while(b<=10);
    getch();
}
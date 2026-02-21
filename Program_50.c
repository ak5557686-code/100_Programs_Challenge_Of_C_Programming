//Purpose: The following program inputs three numbers and displays maximum numbers using locial operators.
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,c;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("The maximum number is %d",a);
    else if(b>a && b>c)
        printf("The maximum number is %d",b);
    else
        printf("The maximum number is %d",c);
        getch();
}
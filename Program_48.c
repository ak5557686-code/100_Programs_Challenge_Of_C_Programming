//Purpose: The following program inputs three numbers and displays the smallest using nested if statement. 
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
    if(a<b)
    {
        if(a<c)
            printf("%d is the smallest number",a);
        else
            printf("%d is the smallesr number",c);
    }
    else
    {
        if(b<c)
            printf("%d is the smallest number",a);
        else
            printf("%d is the smallest number",c);
    }
    getch();
}
//Purpose: The following program iputs name, age and address from the user and displays it on the screen.
#include <stdio.h>
#include <conio.h>
void main(){
    char name[25],address[30];
    int age;
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your Address:");
    scanf("%s",&address);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Your name is %s\n",name);
    printf("Your address is %S\n",address);
    printf("Your age is %d\n",age);
    getch();
}
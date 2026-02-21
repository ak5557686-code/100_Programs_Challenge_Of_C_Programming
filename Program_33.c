//Purpose: The following program inputs marks and displays 'congratualtions!' if marks are 40.
#include <stdio.h>
#include <conio.h>
int main(){
    int marks;
    printf("Please enter your marks:");
    scanf("%d",&marks);
    if(marks>=40)
        printf("Congratulations!");
    getch();
}
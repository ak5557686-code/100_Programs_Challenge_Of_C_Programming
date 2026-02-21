//Purpose: Students Grading System.
#include <stdio.h>
#include <conio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>90)
    printf("A");
    else if(marks>80 && marks<90)
    printf("B");
    else if(marks>70 && marks<80)
    printf("C");
    else if(marks>60 && marks<70)
    printf("D");
    else
    printf("Fail");
    getch();
}
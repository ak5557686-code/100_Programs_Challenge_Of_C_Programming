//Purpose: The following program inputs alary and grades, adds 50% bonus if the grade is greater than 15 
//and adds 25% bonus if the grades are 15 or less and then displays the total salary on the screen.
#include <stdio.h>
#include <math.h>
int main(){
    int grade;
    float salary,bonus;
    printf("Enter salary:");
    scanf("%f",&salary);
    printf("Enter marks:");
    scanf("%d",&grade);
    if(grade>15)
        bonus=salary*50.0/100.0;
    else
        bonus=salary*25.0/100.0;
    salary=salary+bonus;
    printf("Your salary is Rs. %.2f",salary);
    getch();
}
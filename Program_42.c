//Purpose: The following program inputs salaray. If salary is 20000 or more, it deducts 7% of salary. If salary is salary is 10000 or more but less than 20000, 
//it deducts 1000 from the salary. If salary is less than 10000, it deducts nothing.
#include <stdio.h>
#include <conio.h>
int main(){
    float salary,net;
    printf("Enter your salary:");
    scanf("%f",&salary);
    if(salary>=2000)
    net=salary-(salary*7.0/100.0);
    else if(salary>1000 && salary<2000)
    net=salary-1000;
    else
    net=salary;
    printf("Your net salary is Rs.: %.2f",net);
    getch();
}
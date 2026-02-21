//Purpose: The following program inputs number of month and displays the number of days of the corresponding month using if-else-if statement.
//(e.g. if user enters month 2, it will diplay 28 or 29).
#include <stdio.h>
#include <conio.h>
int main(){
    int m;
    printf("Enter month number");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("30 Days");
    else if(m==4||m==6||m==9||m==11)
        printf("31 Days");
    else if(m==2)
        printf("@=28 or 29 days");
    else
        printf("Invalid month number");
        getch();
}
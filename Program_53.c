//Purpose: The following program inputs the number of the week's day and displays the name of that day.
#include <stdio.h>
#include <conio.h>
int main(){
    int a;
    printf("Enter any number from 1-7");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("Friday");
            break;
        case 2:
            printf("Saturday");
            break;
        case 3:
            printf("Sunday");
            break;
        case 4:
            printf("Monday");
            break;
        case 5:
            printf("Tuesday");
            break;
        case 6:
            printf("Wednesday");
            break;
        case 7:
            printf("Thursday");
            break;
        default:
            printf("Invalid number");
            break;
    }
    getch();
}
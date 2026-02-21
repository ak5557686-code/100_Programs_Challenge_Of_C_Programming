//Purpose: The following program inputs a character using getch() function and displays it in the screen.
#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    printf("Enter character:");
    c=getch();
    printf("\nYou entered:%c",c);
    getch();
}
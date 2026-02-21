//Purpose: The following program displays the ASCII code of a character typed by the user using getche() function. 
#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    printf("Enter charcter:");
    c=getche();
    printf("\nThe ASCII code of %c is %d",c,c);
    getch();
}
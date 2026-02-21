//Purpose: The following program displays the name of a person right-justified and address left-justified using 25 character spaces for each.
#include <stdio.h>
#include <conio.h>
int main(){
    char name[]="Ahsan";
    char address[]="AllahAbad";
    printf("%25s\n%-25s",name,address);
    getch();
}
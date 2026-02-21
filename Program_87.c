//Purpose: The following program displays a statement "Your only limit is one you set for yourself." for ten times using a function.
#include <stdio.h>
#include <conio.h>
void display(){
    printf("Your only limit is one you set for yourself.\n");
}
int main(){
    int a;
    for(a=1; a<=10; a++){
        display();
    }
    getch();
}
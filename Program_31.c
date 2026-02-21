//Purpose: The following program inputs a string and displays it on the screen using puts() function.
#include <stdio.h>
#include <conio.h>
int main(){
char book[50];
printf("Enter the name of yur favorite book:");
gets(book);
printf("Your favorite book is:");
puts(book);
getch();
}
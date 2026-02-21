//Purpose: The following program allows user to enter any character through keyboard and determines wether 
//it is a capital letter, small letter, a digit number or a special symbol.
#include <stdio.h>
#include <conio.h>
int main(){
    char ch;
    printf("Enter any character of the key board");
    scanf("%c",&ch);
    if((ch>'A') && (ch<'Z'))
        printf("%c a capital letter",ch);
else if((ch>'a') && (ch<'z'))
        printf("%c a small letter",ch);
else if((ch>'0') && (ch<'9'))
       printf("%c a digit number",ch);
else
        printf("%c a symbol",ch);
        getch();
    }
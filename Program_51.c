//Purpose: The following program inputs a character and displays wether it is a vowel or not.
#include <stdio.h>
#include <conio.h>
int main(){
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        printf("You enterd a vowel");
    else
    printf("You did not enter a vowel");
    getch();
}
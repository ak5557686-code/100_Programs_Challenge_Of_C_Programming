//Purpsoe: the following program inputs a number, passes it to to a function and the function returns it after incrementing by 10. 
//The increment number is displayed by main.
#include <stdio.h>
#include <conio.h>
int inc(int n){
    return n+=10;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",inc(n));
    getch();
}
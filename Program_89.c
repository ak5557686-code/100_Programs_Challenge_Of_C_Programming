//Purpose: The following program inputs a number in main function, passes that number to a function and the function then diplays the table of that number.
#include <stdio.h>
#include <conio.h>
void table(int n){
    int c;
    for(c=1; c<=10; c++){
        printf("%d*%d=%d\n",n,c,n*c);
    }
}
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    table(x);
    getch();
}
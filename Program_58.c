//Purpose: The following program displays first five numbers and their sums using while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n=0;
    int sum=0;
    while(n<=5){
        printf("%d\n",n);
        sum=sum+n;
        n++;
    }
    printf("sum is %d",sum);
    getch();
}
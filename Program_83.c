//Purpose: The following program prints all positve odd integers from 1 to 100 skipping all those that are exactly divisible by 7.
#include <stdio.h>
#include <conio.h>
int main(){
    int c;
    for(c=1; c<=100; c=c+2){
        if(c%7!=0){
            printf("%d\t",c);
        }
    }
    getch();
}
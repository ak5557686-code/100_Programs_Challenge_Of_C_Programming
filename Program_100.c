//Purpsoe: the following program prints 'asteriks' in a certain pattern.
#include <stdio.h>
#include <conio.h>
void print_asteriks(){
    int i,j;
    for(i=1; i<=100; i++){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");        
    }
}
int main(){
    print_asteriks();
    getch();
}
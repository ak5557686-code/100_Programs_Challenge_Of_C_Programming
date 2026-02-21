//Purpose: The following program explains the concept of overflow and underflow.
#include <stdio.h>
#include <conio.h>
int main(){
    short testVar=32767;
    printf("%d\n",testVar);
    testVar=testVar+1;
    printf("%d\n",testVar);
    testVar=testVar-1;
    printf("%d\n",testVar);
    getch();
}
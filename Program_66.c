//Purpose: The following program diaplays first ten numbers with their cubes using do-while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n=1;
    do
    {
        printf("%d\t%d\n",n,n*n*n);
        n++;
    }
    while(n<=10);
    getch();
}
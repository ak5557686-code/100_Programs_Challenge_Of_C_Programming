//Purpose: The following program displays the product of all odd numbers from 1 to 10 using do-while loop.
#include <stdio.h>
#include <conio.h>
int main(){
    int n,product;
    product=1;
    for(n=1;n<=10;n=n+2)
    {product=product*n;
   }
    printf("Product=%d",product);
    getch();
}
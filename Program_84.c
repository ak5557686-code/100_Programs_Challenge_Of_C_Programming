//Purpose: The following program displays the sum of positive odd numbers and product of positive even numbers from 1 to 10.
#include <stdio.h>
#include <conio.h>
int main(){
    int c,sum;
    long int pro;
    sum=0;
    pro=1;
    for(c=1; c<=10; c++){
        if(c%2==0)
            pro=pro*c;
        else
            sum=sum+c;
    }
    printf("Sum of positive odd numbers:%d\n",sum);
    printf("Product of positive even numbers:%d\n",pro);
    getch();
}
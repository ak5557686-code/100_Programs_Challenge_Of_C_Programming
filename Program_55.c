//Purpose: The following program inouts two numbers and displays which number is larger using conditional operator.
#include <stdio.h>
#include <conio.h>
int main(){
    int x,y;
    printf("Enter numbers\n");
    scanf("%d\n%d",&x,&y);
    x>y? printf("%d is larger than %d",x,y):printf("%d is larger than %d",y,x);
    getch();
}
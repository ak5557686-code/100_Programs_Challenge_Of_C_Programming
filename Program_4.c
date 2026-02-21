//Purpose: The following program performs all compound assignment operations on two variables.
#include <stdio.h>
#include <conio.h>
int main(){
int a=20;
printf("Value of a is :%d\n",a);
a+=10;
printf("Value of a+=10 is :%d\n",a);
a-=10;
printf("Valur of a-=10 is :%d\n",a);
a*=10;
printf("Value of a*=10 is :%d\n",a);
a/=10;
printf("Valur of a/=10 is :%d\n",a);
a%=10;
printf("Value of a%%=10 is :%d\n",a);
getch();
}
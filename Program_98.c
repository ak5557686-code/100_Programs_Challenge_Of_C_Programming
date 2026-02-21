//Purpsoe: the following program inputs an integer from the user and passes it to a function. The function then 
//displays the integer and its factorial from 1 to the given integer.
#include <stdio.h>
#include <conio.h>
int fact(){
    int num,m,n;
    long int f;
    printf("Enter the ending number:");
    scanf("%d",&num);
    printf("\ninteger\t\tfactorial\n");
    for(m=1; m<=num; m++){
        f=1;
        for(n=1; n<=m; n++)
            f=f*n;
        printf("%3d\t\t%6d\n",m,f);
    }
    getch();
}
int main(){
    fact();
}
#include <stdio.h>
int main()
{
    int Number;
    printf("Enter the number to do square of it-->");
    scanf("%d",&Number);


    void square(int x){
    printf("the square of the given number is %d",x*x);
    }
    square(Number);
}

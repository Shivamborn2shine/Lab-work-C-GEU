#include <stdio.h>
int main()
{
    int A,B;
    printf("Enter the values of a and b with space to swap it-->");
    scanf("%d%d",&A, &B);
    printf("The value before swapping of a and b is %d %d\n",A,B);

    void Swap(int x,int y){
    x = x+y;
    y = x-y;
    x = x-y;
    printf("the Swap of the given number is %d and %d",x,y);
    }

    Swap(A,B);
}

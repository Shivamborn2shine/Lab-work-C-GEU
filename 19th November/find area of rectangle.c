#include <stdio.h>

int main()
{
    int length,breadth;
    printf("Enter the length and Breadth of the rectangle here--->");
    scanf("%d%d",&length,&breadth);
    void AREA(int x , int y){
    printf("The area of the rectangle using given dimension is %d",x*y);
    }
    AREA(length,breadth);

}

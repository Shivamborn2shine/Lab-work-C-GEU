#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number to check wheather it's even or not:  \n");
    scanf("%d",&number);
    (number%2==0)? printf("The number is Even") : printf("The number is Odd");
    return 0;
}
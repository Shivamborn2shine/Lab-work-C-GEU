#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number you wanna check whether its even or odd--->");
    scanf("%d",&number);
    void EvenOdd(int x){
    if (x%2==0){
        printf("the given number %d is Even",x);
    }
    else{
        printf("the given number %d is Odd",number);
    }

    }
    EvenOdd(number);
}

//wap to calculate the average of 5 integer numbers
#include <stdio.h>
int main()
{
    int int_1 = 65;
    int int_2 = 80;
    int int_3 = 73;
    int int_4 = 49;
    int int_5 = 99;
    int average;
    int sum = int_1 + int_2 + int_3 + int_4 + int_5;
    int AVERAGE = sum / 5;
    printf("The AVERAGE of 5 Givem Numbers %d and %d and %d and %d and %d\nis equal to %d",int_1,int_2,int_3,int_4,int_5,AVERAGE);
    return 0;
}

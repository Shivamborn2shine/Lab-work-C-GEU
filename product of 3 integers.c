//write a program to find the product of 3 integer numbers

#include <stdio.h>

int main() {
    int N_1, N_2, N_3;
    int product;

    printf("Enter the Integer 1: ");
    scanf("%d", &N_1);

    printf("Enter the Integer 2: ");
    scanf("%d", &N_2);

    printf("Enter the Integer 3: ");
    scanf("%d", &N_3);

    product = N_1 * N_2 * N_3;

    printf("The PRODUCT of the 3 given integers = %d\n", product);

    return 0;
}

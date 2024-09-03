#include <stdio.h>

int main() {
    float N_1, N_2, N_3, N_4, N_5;
    float sum, average;

    printf("Enter the number 1: ");
    scanf("%f", &N_1);

    printf("Enter the number 2: ");
    scanf("%f", &N_2);

    printf("Enter the number 3: ");
    scanf("%f", &N_3);

    printf("Enter the number 4: ");
    scanf("%f", &N_4);

    printf("Enter the number 5: ");
    scanf("%f", &N_5);

    sum = N_1 + N_2 + N_3 + N_4 + N_5;

    average = sum / 5;

    printf("The Average of the given 5 numbers = %f\n", average);

    return 0;
}

//wap to swap two variables
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Output swapped values
    printf("After swapping: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

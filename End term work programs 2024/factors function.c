#include <stdio.h>

void prime_factors(int n) {
    printf("Prime factors of %d are:\n", n);

    // Count the number of times 2 divides n
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0) {
        printf("2 ----> %d times\n", count);
    }

    // Check for odd factors
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            printf("%d ----> %d times\n", i, count);
        }
    }

    // If n is still greater than 2, it's a prime number
    if (n > 2) {
        printf("%d ----> 1 time\n", n);
    }
}

int main() {
    int number;
    printf("Enter a number to find its prime factors:\n");
    scanf("%d", &number);

    if (number <= 1) {
        printf("No prime factors for numbers <= 1.\n");
    } else {
        prime_factors(number);
    }

    return 0;
}

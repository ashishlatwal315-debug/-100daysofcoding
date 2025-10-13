#include <stdio.h>

int main() {
    int n, remainder;
    long long product = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product = product * remainder;
        }
        n = n / 10;
    }

    printf("Product of odd digits = %lld\n", product);

    return 0;
}


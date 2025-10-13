#include <stdio.h>
#include <math.h>

int main() {
    int n, originalN, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    int tempN = n;
    while (tempN != 0) {
        tempN /= 10;
        ++digits;
    }

    tempN = n;

    
    while (tempN != 0) {
        remainder = tempN % 10;
        result += pow(remainder, digits);
        tempN /= 10;
    }

    if (result == originalN) {
        printf("%d is an Armstrong number.\n", originalN);
    } else {
        printf("%d is not an Armstrong number.\n", originalN);
    }

    return 0;
}

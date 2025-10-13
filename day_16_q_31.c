#include <stdio.h>

int main() {
    int n, i;
    int binaryNum[32];

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation is: 0\n");
        return 0;
    }
    
    i = 0;
    int temp_n = n;
    while (temp_n > 0) {
        binaryNum[i] = temp_n % 2;
        temp_n = temp_n / 2;
        i++;
    }

    printf("Binary representation of %d is: ", n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}


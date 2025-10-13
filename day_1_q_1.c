#include <stdio.h>

int main() {
    int first_number, second_number, sum_result;

    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);

    sum_result = first_number + second_number;

    printf("The sum is: %d\n", sum_result);
    
    return 0;
}
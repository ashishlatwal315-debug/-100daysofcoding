#include <stdio.h>

int main() {
    int first_number, second_number, sum_result, difference_result, product_result;
    float quotient_result;

    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);

    sum_result = first_number + second_number;
    difference_result = first_number - second_number;
    product_result = first_number * second_number;

    printf("The sum is: %d\n", sum_result);
    printf("The difference is: %d\n", difference_result);
    printf("The product is: %d\n", product_result);
    
    if (second_number != 0) {
        quotient_result = (float)first_number / second_number;
        printf("The quotient is: %.2f\n", quotient_result);
    } else {
        printf("Cannot divide by zero.\n");
    }
    
    return 0;
}


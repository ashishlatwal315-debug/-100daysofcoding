#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0.0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2.0;
        printf("Fine is: Rs. %.2f\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2.0) + ((lateDays - 5) * 4.0);
        printf("Fine is: Rs. %.2f\n", fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((lateDays - 10) * 6.0);
        printf("Fine is: Rs. %.2f\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}

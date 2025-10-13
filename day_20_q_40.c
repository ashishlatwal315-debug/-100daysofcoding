#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int i;
    int error = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1') {
            binary[i] = '0';
        } else if (binary[i] == '0') {
            binary[i] = '1';
        } else {
            printf("Error: Invalid binary digit entered.\n");
            error = 1;
            break;
        }
    }

    if (error == 0) {
        printf("1's complement is: %s\n", binary);
    }

    return 0;
}

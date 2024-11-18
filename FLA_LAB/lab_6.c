#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    do {
        printf("\nEnter a string of 0's and 1's: ");
        scanf("%s", str);

        int count_0 = 0, count_1 = 0;
        int is_valid = 1; // Flag to check if the string is valid (contains only 0's and 1's)

        // Iterate through the string
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '0') {
                count_0++;
            } else if (str[i] == '1') {
                count_1++;
            } else {
                is_valid = 0; // Invalid character detected
                break;
            }
        }

        if (!is_valid) {
            printf("The string contains invalid characters. Please enter a valid binary string.\n");
        } else {
            // Check if the counts of '0's and '1's are even
            if (count_0 % 2 == 0 && count_1 % 2 == 0) {
                printf("The string contains an even number of '0's and '1's.\n");
            } else {
                printf("The string does not contain an even number of '0's and '1's.\n");
            }
        }

        // Ask if the user wants to check another string
        printf("\nDo you want to check another string? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1); // Continue while the user enters 1

    printf("Program terminated.\n");
    return 0;
}

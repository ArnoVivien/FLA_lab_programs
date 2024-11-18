#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    do {
        printf("\nEnter a string of 0's and 1's: ");
        scanf("%s", str);

        int is_valid = 1; // Flag to check if the string is valid (only contains 0's and 1's)
        int len = strlen(str);

        // Validate the string (check for only '0's and '1's)
        for (int i = 0; i < len; i++) {
            if (str[i] != '0' && str[i] != '1') {
                is_valid = 0;
                break;
            }
        }

        if (!is_valid) {
            printf("The string contains invalid characters. Please enter a string of only 0's and 1's.\n");
        } else {
            // Check if the string ends with "11"
            if (len >= 2 && str[len - 2] == '1' && str[len - 1] == '1') {
                printf("The string ends with '11'.\n");
            } else {
                printf("The string does not end with '11'.\n");
            }
        }

        // Ask if the user wants to check another string
        printf("\nDo you want to check another string? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1); // Continue while the user enters 1

    printf("Program terminated.\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    do {
        printf("\nEnter a string: ");
        scanf("%s", str);

        int is_number = 1; // Flag to check if the string consists of only numbers

        // Iterate through the string
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] < '0' || str[i] > '9') { // Check if the character is not a digit
                is_number = 0;
                break;
            }
        }

        // Output the result
        if (is_number) {
            printf("The string consists of only numbers.\n");
        } else {
            printf("The string does not consist of only numbers.\n");
        }

        // Ask if the user wants to check another string
        printf("\nDo you want to check another string? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1); // Continue while the user enters 1

    printf("Program terminated.\n");
    return 0;
}

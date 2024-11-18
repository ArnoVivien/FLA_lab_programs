#include <stdio.h>
#include <string.h>

int main() {
    char strings[100][100]; // Array to store multiple strings
    int num_strings, choice;

    do {
        printf("\nEnter the number of strings you want to check: ");
        scanf("%d", &num_strings);

        // Take all the strings as input
        for (int j = 0; j < num_strings; j++) {
            printf("\nEnter String %d: ", j + 1);
            scanf("%s", strings[j]);
        }

        // Process each string and display results
        printf("\nResults:\n");
        for (int j = 0; j < num_strings; j++) {
            char *str = strings[j];
            int i = 0, is_valid = 1;

            // Check leading 0's
            while (str[i] == '0') {
                i++;
            }

            // Check for single '1'
            if (str[i] == '1') {
                i++;
            } else {
                is_valid = 0; // No '1' found after leading 0's
            }

            // Check trailing 0's
            while (str[i] == '0') {
                i++;
            }

            // Ensure no invalid characters or extra characters remain
            if (str[i] != '\0') {
                is_valid = 0;
            }

            // Display result
            if (is_valid) {
                printf("String %d: The string matches the pattern 0*10*.\n", j + 1);
            } else {
                printf("String %d: The string does not match the pattern 0*10*.\n", j + 1);
            }
        }

        // Ask if the user wants to check another set of strings
        printf("\nDo you want to check more strings? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1); // Continue while the user enters 1

    printf("Program terminated.\n");
    return 0;
}


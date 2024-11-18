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
                printf("String %d: The string contains invalid characters.\n", j + 1);
            } else {
                // Check if the number of '0's and '1's are equal
                if (count_0 == count_1) {
                    printf("String %d: The string has an equal number of '0's and '1's.\n", j + 1);
                } else {
                    printf("String %d: The string does not have an equal number of '0's and '1's.\n", j + 1);
                }
            }
        }

        // Ask if the user wants to check another set of strings
        printf("\nDo you want to check more strings? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1); // Continue while the user enters 1

    printf("Program terminated.\n");
    return 0;
}

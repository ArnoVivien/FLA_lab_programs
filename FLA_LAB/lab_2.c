#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count_a, count_b;
    int choice;

    do {
        count_a = 0; // Reset counts for each new string
        count_b = 0;

        printf("\nEnter a string: ");
        scanf("%s", str);

        // Iterate through the string and count 'a's and 'b's
        int valid = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'a') {
                count_a++;
            } else if (str[i] == 'b') {
                count_b++;
            } else {
                valid = 0; // Mark as invalid
                break;
            }
        }

        if (!valid) {
            printf("The string contains invalid characters.\n");
        } else {
            // Check if the number of 'a's equals the number of 'b's
            if (count_a == count_b) {
                printf("The string has an equal number of 'a's and 'b's.\n");
            } else {
                printf("The string does not have an equal number of 'a's and 'b's.\n");
            }
        }

        // Ask if the user wants to continue
        printf("\nDo you want to check another string? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Program terminated.\n");
    return 0;
}

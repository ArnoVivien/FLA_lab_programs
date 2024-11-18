#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    do {
        printf("\nEnter a string (greater than 3): ");
        scanf("%s", str);

        int len = strlen(str);

        // Check if the string ends with "101"
        if (len >= 3 && str[len - 3] == '1' && str[len - 2] == '0' && str[len - 1] == '1') {
            printf("The string ends with '101'.\n");
        } else {
            printf("The string does not end with '101'.\n");
        }

        // Ask if the user wants to check another string
        printf("\nDo you want to check another string? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1); // Continue while user enters 1

    printf("Program terminated.\n");
    return 0;
}

// C program to accept the language L={a^nb^m | n>=4, m<=3}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count_a, count_b, is_valid;
    int choice;

    printf("Language L = {a^n b^m | n >= 4, m <= 3}\n");

    do {
        printf("\nEnter a string to check: ");
        scanf("%s", str);

        // Initialize counters
        count_a = 0;
        count_b = 0;
        is_valid = 1;

        // Traverse the string using a for loop
        int len = strlen(str);
        int i;
        for (i = 0; i < len; i++) {
            if (str[i] == 'a') {
                if (count_b > 0) {
                    is_valid = 0; // Found 'a' after 'b'
                    break;
                }
                count_a++;
            } else if (str[i] == 'b') {
                count_b++;
            } else {
                is_valid = 0; // Invalid character
                break;
            }
        }

        // Validate counts
        if (is_valid && count_a >= 4 && count_b <= 3) {
            printf("The string belongs to the language L.\n");
        } else {
            printf("The string does not belong to the language L.\n");
        }

        // Ask the user if they want to check another string
        printf("\nDo you want to check another string? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice != 0);

    printf("Program exited.\n");
    return 0;
}


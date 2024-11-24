#include <stdio.h>

int isAlternate(const char *str) {
    // Check if the string is empty or has only one character
    if (str[0] == '\0' || str[1] == '\0') {
        return 1; // A single character or empty string is considered alternating
    }

    // Loop through the string and check adjacent characters
    for (int i = 0; str[i + 1] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            return 0; // Not alternating if two consecutive characters are the same
        }
    }

    return 1; // All characters are alternating
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isAlternate(str)) {
        printf("The string contains 1's and 0's in alternate form.\n");
    } else {
        printf("The string does not contain 1's and 0's in alternate form.\n");
    }

    return 0;
}

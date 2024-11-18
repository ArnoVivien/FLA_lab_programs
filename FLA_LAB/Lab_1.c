// C program to accept the language L={a^nb^m | n>=4, m<=3}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count_a = 0, count_b = 0, valid = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int i;

    // Iterate through the string
    for (i = 0; i < len; i++) {
        if (str[i] == 'a') {
            count_a++; // Count 'a's
        } else if (str[i] == 'b') {
            count_b++; // Count 'b's
        } else {
            valid = 0; // Invalid character found
            break;
        }
    }

    // Check the conditions of the language
    if (valid && count_a >= 4 && count_b <= 3) {
        printf("The string %s belongs to the language L.\n",str);
    } else {
        printf("The string %s does not belong to the language L.\n",str);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    char repeat;

    do {
        printf("Enter a string: ");
        scanf("%s", str);

        if (isPalindrome(str)) {
            printf("%s is a palindrome.\n", str);
        } else {
            printf("%s is not a palindrome.\n", str);
        }

        printf("Do you want to check another string? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

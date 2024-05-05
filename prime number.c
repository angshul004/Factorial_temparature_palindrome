#include <stdio.h>
#include <stdbool.h>

// youtube video https://youtu.be/Y80vZcAoPgY
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    char repeat;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

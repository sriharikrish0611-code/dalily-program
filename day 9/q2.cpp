#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        printf("The number is a Palindrome.\n");
    else
        printf("The number is not a Palindrome.\n");

    return 0;
}


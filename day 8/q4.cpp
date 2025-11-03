#include <stdio.h>

int main() {
    int num, digit, count = 0, sum = 0;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;
        sum = 0;
        product = 0;
    } else {
        while (num > 0) {
            digit = num % 10;
            count++;
            sum += digit;
            product *= digit;
            num /= 10;
        }
    }

    printf("Count of digits = %d\n", count);
    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %lld\n", product);

    return 0;
}


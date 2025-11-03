#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, count = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}


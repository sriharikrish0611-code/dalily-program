#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (tempA * tempB) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}


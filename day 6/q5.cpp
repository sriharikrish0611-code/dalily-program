#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("The character is Uppercase.\n");
    else if (islower(ch))
        printf("The character is Lowercase.\n");
    else if (isdigit(ch))
        printf("The character is a Digit.\n");
    else
        printf("The character is a Special Symbol.\n");

    return 0;
}


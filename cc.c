#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        if (str[count] != '\n') {  // Ignore newline added by fgets
            count++;
        } else {
            break;
        }
    }

    printf("Number of characters = %d\n", count);

    return 0;
}

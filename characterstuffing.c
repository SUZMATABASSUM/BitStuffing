#include <stdio.h>
#include <string.h>

int main() {
    char data[100], stuffed[200];
    char flag = 'F';
    char esc = 'E';
    int i, j = 0;

    printf("Enter the data: ");
    scanf("%s", data);

    // Character Stuffing
    for (i = 0; data[i] != '\0'; i++) {
        if (data[i] == flag || data[i] == esc) {
            stuffed[j++] = esc;   
        }
        stuffed[j++] = data[i];
    }

    stuffed[j] = '\0';

    printf("\nOriginal Data : %s", data);
    printf("\nStuffed Data  : %s\n", stuffed);

    return 0;
}

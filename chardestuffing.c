#include <stdio.h>

int main() {
    char input[100], output[100];
    int i, j = 0;

    printf("Enter the stuffed string: ");
    scanf("%s", input);

    for(i = 0; input[i] != '\0'; i++) {
        if(input[i] == 'E') {
            i++;                
            output[j++] = input[i];
        }
        else if(input[i] == 'F') {
            continue;           
        }
        else {
            output[j++] = input[i];
        }
    }

    output[j] = '\0';

    printf("De-stuffed Data: %s\n", output);

    return 0;
}

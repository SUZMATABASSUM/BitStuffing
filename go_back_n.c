#include <stdio.h>

int main() {
    int i, n, window;

    printf("Enter the number of frames: ");
    scanf("%d", &n);

    printf("Enter the window size: ");
    scanf("%d", &window);

    for (i = 1; i <= n; i++) {
        printf("Sending Frame %d\n", i);

        if (i % window == 0 || i == n) {
            printf("Acknowledgement received up to Frame %d\n", i);
        }
    }

    printf("All frames transmitted successfully.\n");

    return 0;
}

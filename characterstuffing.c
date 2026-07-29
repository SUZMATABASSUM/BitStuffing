#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, n, pos;
    char a[20], b[100], ch;

    printf("Enter the string: ");
    scanf("%s", a);

    n = strlen(a);

    printf("Enter position to insert the character: ");
    scanf("%d", &pos);

    while (pos < 1 || pos > n + 1)
    {
        printf("Invalid position, enter again: ");
        scanf("%d", &pos);
    }

    getchar();   

    printf("Enter the character to stuff: ");
    scanf("%c", &ch);
    b[j++] = 'D';
    b[j++] = 'L';
    b[j++] = 'E';
    b[j++] = 'S';
    b[j++] = 'T';
    b[j++] = 'X';

    for (i = 0; i < n; i++)
    {
        if (i == pos - 1)
        {
            b[j++] = 'D';
            b[j++] = 'L';
            b[j++] = 'E';
            b[j++] = ch;
            b[j++] = 'D';
            b[j++] = 'L';
            b[j++] = 'E';
        }

        if (a[i] == 'D' && a[i + 1] == 'L' && a[i + 2] == 'E')
        {
            b[j++] = 'D';
            b[j++] = 'L';
            b[j++] = 'E';
        }

        b[j++] = a[i];
    }

    if (pos == n + 1)
    {
        b[j++] = 'D';
        b[j++] = 'L';
        b[j++] = 'E';
        b[j++] = ch;
        b[j++] = 'D';
        b[j++] = 'L';
        b[j++] = 'E';
    }

    b[j++] = 'D';
    b[j++] = 'L';
    b[j++] = 'E';
    b[j++] = 'E';
    b[j++] = 'T';
    b[j++] = 'X';

    b[j] = '\0';

    printf("\nFrame after stuffing:\n%s\n", b);

    return 0;
}

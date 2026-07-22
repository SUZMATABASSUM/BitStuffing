#include <stdio.h>

int main()
{
    int data[200], destuffed[200];
    int n, i, j = 0, count = 0;

    printf("Enter the number of bits: ");
    scanf("%d", &n);

    printf("Enter the stuffed bits:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (data[i] == 1)
        {
            count++;
            destuffed[j++] = data[i];

            if (count == 5)
            {
                i++;      // Skip the stuffed 0
                count = 0;
            }
        }
        else
        {
            count = 0;
            destuffed[j++] = data[i];
        }
    }

    printf("De-Stuffed Data: ");
    for (i = 0; i < j; i++)
    {
        printf("%d", destuffed[i]);
    }

    printf("\n");

    return 0;
}

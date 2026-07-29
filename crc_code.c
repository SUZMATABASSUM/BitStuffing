#include <stdio.h>
#include <string.h>

int main()
{
    char data[100], divisor[20], temp[100], rem[20];
    int i, j, dataLen, divLen;

    printf("Enter Data: ");
    scanf("%s", data);

    printf("Enter Divisor: ");
    scanf("%s", divisor);

    dataLen = strlen(data);
    divLen = strlen(divisor);

    strcpy(temp, data);
    for (i = 0; i < divLen - 1; i++)
        temp[dataLen + i] = '0';

    temp[dataLen + divLen - 1] = '\0';
    strcpy(rem, temp);
    for (i = 0; i < dataLen; i++)
    {
        if (rem[i] == '1')
        {
            for (j = 0; j < divLen; j++)
            {
                if (rem[i + j] == divisor[j])
                    rem[i + j] = '0';
                else
                    rem[i + j] = '1';
            }
        }
    }
    printf("\nCRC Remainder: ");
    for (i = dataLen; i < dataLen + divLen - 1; i++)
        printf("%c", rem[i]);

    printf("\nTransmitted Codeword: %s", data);
    for (i = dataLen; i < dataLen + divLen - 1; i++)
        printf("%c", rem[i]);

    printf("\n");

    return 0;
}

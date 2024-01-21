#include <stdio.h>

int main()
{
    int n;
    int inPutTemp;
    scanf_s("%d", &n);
    int inPutResult[1000];
    int inPut[1000];

    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &inPutTemp);
        inPut[i] = inPutTemp;
        inPutResult[i] = inPutTemp;

    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (inPutResult[j] > inPutResult[j + 1]) {
                int temp = inPutResult[j];
                inPutResult[j] = inPutResult[j + 1];
                inPutResult[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (inPut[i] == inPutResult[j]) printf("%d \n", j + 1);
        }

    }

    return 0;
}
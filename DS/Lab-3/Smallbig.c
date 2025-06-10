#include <stdio.h>

int main()
{
    int n, i;
    int numbers[100];
    int min, max;
    int minPos, maxPos;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    min = max = numbers[0];
    minPos = maxPos = 0;
    for (i = 1; i < n; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
            minPos = i;
        }
        if (numbers[i] > max)
        {
            max = numbers[i];
            maxPos = i;
        }
    }
    printf("Smallest number is %d at position %d\n", min, minPos + 1);
    printf("Largest number is %d at position %d\n", max, maxPos + 1);

    return 0;
}

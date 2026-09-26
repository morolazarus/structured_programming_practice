#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int number;
    int sum = 0;
    double average;

    printf("Enter the number of values, followed by the values:\n");
    scanf("%d", &count);
         if (count <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        scanf("%d", &number);
        sum += number;
    }

    average = (double)sum / count;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

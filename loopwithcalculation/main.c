#include <stdio.h>
#include <stdlib.h>
/*EXercise5(loops_with_calculations)
Reference book
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4__, Exercise 4.9__.
A lightweight C program that calculates the cumulative sum and arithmetic average of a user-defined series of integers.
## How It Works
User Input: Prompts the user to enter the total count of numbers .
Validation: Checks if count > 0. If invalid, the program terminates immediately with an error message.
Data Accumulation: Uses a for loop to prompt for each integer and adds it to a running total (sum).
Output: Calculates the average and prints both the total sum and average to the screen.*/
int main()
{
    int count=0;
    int num;
    int sum=0;
    float average;
    printf("Enter how many number of times you want to sum : ");
    scanf("%d",&count);
    if(count <=0){
        printf("Invalid input");
        return 1;
    }
    for(int i=1;i<=count;++i){
         scanf("%d",&num);
            sum+=num;

    }
    average = sum/count;
    printf("\nSum:%d",sum);
    printf("\nAverage:%f ",average);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//textbook Reference:  Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.11
//What the program does:The program prompts the user for a multiplier limit and calculates the corresponding sequence of multiples of 7, displaying each calculated term along with the final cumulative total.
//Concepts used: for loop, integer variables, module operator, increment ++, scanf(), printf().
//How it works:
//Input: The program reads an integer n
//Loop Iteration:A for loop runs from i = 1 up to 100 and increments it by 1 before going to the if condition. In each iteration, it calculates the sum.
//Output & Processing: The program prints the sum using the printf()
int main()
{
    int i = 1;
    int sum=0;
    for(i=1; i<=100; i++)
    {

        if (i%7==0)
            sum+=i;
    }
    printf("The sum of multiples of seven (1-100) are: %d",sum);
    return 0;
}

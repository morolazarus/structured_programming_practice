#include <stdio.h>
#include <stdlib.h>
//Textbook Reference: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.18
//What the program does: The program prompts the user to enter two integers, compares their values using relational operators, and determines whether the first number is larger, the second number is larger, or both numbers are equal.
//Concepts used:Integer variables,scanf(), printf(), relational operators (>, <, ==), ifelse decision structure.
//How it works:
//Input:The program reads two integers from standard input into variables using scanf().
//Decision Logic:An elseif, if, structure evaluates the relationship between the two numbers:
//The first if branch checks if the first number is greater than the second.
//The else if branch checks if the second number is greater than the first.
//The final else branch executes if both numbers are equal.
//Output: The program prints a message stating which number is larger or that they are equal.
int main()
{
    int highest_rainfall, curr_rainfall;
    printf("Enter the highest rainfall recorded in the country: ");
    scanf("%d",&highest_rainfall);
    printf("Enter the rainfall in the current year: ");
    scanf("%d",&curr_rainfall);
    if(curr_rainfall > highest_rainfall){

        printf("Highest rainfall received ever\n");
    }else{
        printf("Lower rainfall than the highest ever\n");
    }
    return 0;
}

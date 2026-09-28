#include <stdio.h>
#include <stdlib.h>
//Textbook Reference: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.16
//What the program does:The program prompts the user to enter two numbers, calculates their sum, product, difference, quotient, and remainder, and displays the formatted results to the console.
//Concepts used:Integer variables,scanf(), arithmetic operators (+,-, *, /, %), printf().
//How it works:
//Input:The program declares variables to store two numbers entered by the user through scanf().
//Process: It performs basic arithmetic calculations (addition, subtraction, multiplication, division, and modulus) on the stored inputs.
//Output:The program uses printf() to output the computed results clearly with explanatory text.

int main()
{
    int num1, num2, sum, product, difference, quotient;
    int remainder;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum = num1 + num2;
    product = num1*num2;
    difference = num1-num2;
    quotient = num1/num2;
    remainder = num1%num2;
    printf("The sum of %d and %d = % d\n",num1, num2, sum);
    printf("The product of %d and %d = % d\n", num1, num2, product);
    printf("The difference of %d and %d = % d\n",num1, num2, difference);
    printf("The quotient of %d and %d = % d\n", num1, num2, quotient);
    printf("The remainder of %d and %d = % d\n", num1, num2,  remainder);

    return 0;
}

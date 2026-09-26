# structured_programming_practice
### Exercise 1 – Basic input
### Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2.7, Exercise 1.
### What the program does: The program tells a user to Enter their age
### Concepts used: printf(), \n
### How it works: The output is placed in a printf() in quotes and is ### what is to be printed and \n skips a line

## Exercise 2
### Textbook Reference: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.16
### What the program does:The program prompts the user to enter two numbers, calculates their sum, product, difference, quotient, and remainder, and displays the formatted results to the console.
### Concepts used:Integer variables,scanf(), arithmetic operators (+,-, *, /, %), printf().
### How it works:
### Input:The program declares variables to store two numbers entered by the user through scanf().
### Process: It performs basic arithmetic calculations (addition, subtraction, multiplication, division, and modulus) on the stored inputs.
### Output:The program uses printf() to output the computed results clearly with explanatory text.

## Exercise 3
### textbook Reference:  Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.11
### What the program does:The program prompts the user for a multiplier limit and calculates the corresponding sequence of multiples of 7, displaying each calculated term along with the final cumulative total.
### Concepts used: for loop, integer variables, module operator, increment ++, scanf(), printf().
### How it works:
### Input: The program reads an integer n
### Loop Iteration:A for loop runs from i = 1 up to 100 and increments it by 1 before going to the if condition. In each iteration, it calculates the sum.
### Output & Processing: The program prints the sum using the printf()

### Exercise 4
### Category:Loops with calculations
### Textbook Reference:Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.9
### Problem Description:** This program asks the user how many integer values they want to process, reads those numbers one by one, and calculates their total sum and average.
### Main Concepts Used: for loops, printf, scanf, if, double
### How the Program Works: The program first takes an integer input representing the total count of values to read. It shows that the count is greater than zero to prevent division by zero. Then, a for loop runs count times, prompting for each integer and accumulating it into sum. Finally, it casts sum to a double to perform floating-point division for the average and prints the formatted results.
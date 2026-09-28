# structured_programming_practice
### Exercise 1 – Basic input
### Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2.7, Exercise 1.
### What the program does: The program tells a user to Enter their age
### Concepts used: printf(), \n
### How it works: The output is placed in a printf() in quotes and is ### what is to be printed and \n skips a line

## Exercise 2( input, process and output)
### Textbook Reference: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.16
### What the program does:The program prompts the user to enter two numbers, calculates their sum, product, difference, quotient, and remainder, and displays the formatted results to the console.
### Concepts used:Integer variables,scanf(), arithmetic operators (+,-, *, /, %), printf().
### How it works:
### Input:The program declares variables to store two numbers entered by the user through scanf().
### Process: It performs basic arithmetic calculations (addition, subtraction, multiplication, division, and modulus) on the stored inputs.
### Output:The program uses printf() to output the computed results clearly with explanatory text.

## Exercise 4(Basic loop)
### textbook Reference:  Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.11
### What the program does:The program prompts the user for a multiplier limit and calculates the corresponding sequence of multiples of 7, displaying each calculated term along with the final cumulative total.
### Concepts used: for loop, integer variables, module operator, increment ++, scanf(), printf().
### How it works:
### Input: The program reads an integer n
### Loop Iteration:A for loop runs from i = 1 up to 100 and increments it by 1 before going to the if condition. In each iteration, it calculates the sum.
### Output & Processing: The program prints the sum using the printf()

### Exercise 3(Decision)
### Textbook Reference: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.18
### What the program does: The program prompts the user to enter two integers, compares their values using relational operators, and determines whether the first number is larger, the second number is larger, or both numbers are equal.
### Concepts used:Integer variables,scanf(), printf(), relational operators (>, <, ==), ifelse decision structure.
### How it works:
### Input:The program reads two integers from standard input into variables using scanf().
### Decision Logic:An elseif, if, structure evaluates the relationship between the two numbers:
### The first if branch checks if the first number is greater than the second.
### The else if branch checks if the second number is greater than the first.
### The final else branch executes if both numbers are equal.
### Output: The program prints a message stating which number is larger or that they are equal.
#include <stdio.h>
#include <stdlib.h>
/*Exercise 7(loopdecision)
Textbook Reference: Deitel & Deitel, *C How to Program* (9th Edition), Chapter 3 exercise 3.22
What the program does:Prompts the user to enter an integer and determines whether it is a prime number.
Concepts used:if else`logic, for loop, modulus operator (%), scanf(), printf().
How it works:
Input:eads an integer `num` from the user using `scanf()`.
Validation: Rejects values $\le 1$ since numbers less than or equal to 1 are not prime.
Prime Check:A `for` loop tests numbers from `2` up to `num / 2`. If `num % i == 0`, the number is composite and the program exits early.
Output: Prints whether the entered integer is a prime or not prime.*/
int main()
{
    int num;
    printf("Enter the integer to be checked: ");
    scanf("%d",&num);
    if (num<=1){
        printf("The number is not a prime number\n");
    }
        for(int i =2;i<=num/2;++i){
            if(num%i==0){
                printf("The number %d is not prime number\n",num);
                return 0;
            }
        }
        printf("The number %d is a prime number",num);
    return 0;
}

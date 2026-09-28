#include <stdio.h>
#include <stdlib.h>
/*Exercise 8(interactiveconsoleprogramme)
//textbook Reference:  Deitel, C How to Program (9th Edition), Chapter 3 , Exercise 3.18
## How the Program Works
This program is a Sales-Commission Calculator designed to process weekly earnings for sales representatives

### Program Execution Flow
1. The program uses a while loop to continuously prompt for input using scanf[cite: 1].
2. The user enters a salesperson's gross sales in dollars
3. Entering -1 serves as the value to terminate the program loop
*/
int main()
{
    double sales;
    double earnings;
    printf("Enter sales in dollar(-1 to end): ");
    scanf("%.lf",&sales);
    while(sales !=-1.0){
        earnings = 200.0 +(0.09*sales);
        printf("Salary is : $%.2f\n",earnings);
        printf("Enter sales in dollars(-1 to end): ");
        scanf("%lf",&sales);
    }
    return 0;
}

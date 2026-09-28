#include <stdio.h>
#include <stdlib.h>
/*Exercise 3.6(loop_with_user_input)
textbook Reference:  Deitel, C How to Program (9th Edition), Chapter 3 , Exercise 3.6
 How the Program Works
This program is a Sales-Commission Calculator designed to process weekly earnings for sales representatives
User Input:*Prompts the user for two integer base X and component Y
Iterative Multiplication:Uses a while loop to multiply x by itself y times.
Output:Displays the final computed power value.*/

int main()
{
     int x;
    int y;
    printf("Enter the first integer(y): ");
    scanf("%d",&x);
    printf("Enter another integer(y): ");
    scanf("%d",&y);
    int i=1;
    int power =1;
    while(i<=y){
    power = power*x;
    i++;
    }
     printf("%d raised to %d is: %d\n",x,y,power);
    return 0;
}

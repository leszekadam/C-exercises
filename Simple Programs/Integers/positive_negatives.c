/* This program check whether the number is positive or negative
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

//include standard input output library
#include <stdio.h>

int main(void)
{
    // declare variables
    int number;

    // prompt the user for the number to check
    printf("Enter the number to check whether is positive or negative: ");
    scanf("%d", &number);

    // condition statement to check whether the number is positive or negative
    if (number > 0)
        printf("%d is positive", number);
    else
        printf("%d is negative", number);

    return 0;
}

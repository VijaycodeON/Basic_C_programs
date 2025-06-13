/*---------------------------------------------
DESCRIPTION : Sum of two integers
----------------------------------------------*/

//header inclusion
#include<stdio.h>

//main function
int main()
{
    //declare integer variables for two numbers and also to store sum value.
    int num1, num2, sum=0;
    
    //take two i/p values from the user
    printf("Enter the two integers to be summed : ");
    scanf("%d%d",&num1, &num2);
    
    //two values are added and stored in the sum variable.
    sum = num1+num2;
    
    //sum value is printed on the o/p terminal.
    printf("sum = %d\n", sum);
     
    return 0;
    
}

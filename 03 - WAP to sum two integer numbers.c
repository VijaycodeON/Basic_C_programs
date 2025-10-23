/*--------------------------------------------
DESCRIPTION : WAP to Sum two integer numbers
----------------------------------------------*/

//header inclusion
#include<stdio.h>

//main function
int main()
{
    //declare integer variables for two numbers and also to store sum value.
    int num1, num2, sum=0;

    //print message to the user
    printf("Enter the two integer numbers: ");
    //take two i/p values from the user
    scanf("%d%d",&num1, &num2);
    
    //two values are added and stored in the sum variable.
    sum = num1+num2;
    
    //sum value is printed on the p/p screen.
    printf("sum = %d\n", sum);
     
    //terminate program
    return 0;
    
}

/* ***************** EXAMPLE *************************

   Sample executions :

Enter the two integer numbers: 54 18
sum = 72

*************************************************** */

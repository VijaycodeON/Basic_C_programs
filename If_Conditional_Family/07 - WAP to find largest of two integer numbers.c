/*-----------------------------------------------
DESCRIPTION : WAP to print largest of 2 integers
------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //decaler two integer variables
    int num1, num2;
    
    //print message to the user
    printf("Enter two numbers: ");
    //store i/p values from the use into the variable
    scanf("%d%d", &num1, &num2);
    
    //condition to check if num1 is greater than num2 ( if block is true, else block won't execute)
    if( num1>num2 );
    //if block is false, than num2 should be greater, asign num2 value in num1
    else
        num1=num2;
    
    //print largest number in the o/p terminal also using only one print statement for both if & else block
    printf("Largest is %d\n", num1);
    
    //terminate program
    return 0;
        
}


/* *************** EXAMPLE ********************

   Sample execution:

   Enter two numbers: 30 47
   Largest is 47

******************************************** */

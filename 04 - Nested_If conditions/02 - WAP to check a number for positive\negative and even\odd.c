/*----------------------------------------------------------------------
DESCRIPTION : WAP to check a number for positive/negative and even/odd
-----------------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare signed integer variable
    int num;
    
    //print message
    printf("Enter a number: ");
    //store value from the user into the variable
    scanf("%d", &num);
    
    //condition check if number is zero
    if( num == 0 )
    {
        //printf o/p message on the terminal
        printf("The number is zero\n");
    }
    //condition check, given number is positive
    else if( num>0 )
    {
        //condition check, given number is even
        if( (num%2) == 0 )
        {
            //print o/p message on the terminal
            printf("The number %d is positive and even.", num);
        }
        //if condition fails, given number is odd
        else
        {
            //print o/p message on the terminal
            printf("The number %d is positive and odd.", num);
        }
    }
    //if condition fails, given number is negative
    else
    {
        //condition check, given number is even
        if( (num%2) == 0 )
        {
            //print o/p message on the terminal
            printf("The number %d is negative and even.", num);
        }
        //if condition fails, given number is odd
        else
        {
            //print o/p message on the terminal
            printf("The number %d is negative and odd.", num);
        }
    }
    
    return 0;
}

/*----------------------------------------------------------------------

  Program execution sample:

Enter a number: 8
The number 8 is positive and even.

Enter a number: -5
The number -5 is negative and odd.

Enter a number: 0
The number is zero.

-----------------------------------------------------------------------*/

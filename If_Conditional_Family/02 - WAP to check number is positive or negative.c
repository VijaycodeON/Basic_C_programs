/*-------------------------------------------------------------------
DESCRIPTION : WAP to check whether a number is positive or negative.
--------------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare integer variable
    int num;
    
    //print message to the user
    printf("Enter a number: ");
    //store the i/p value from the user into the variable
    scanf("%d", &num);
    
    //if num is lesser than 0
    if( num<0 )
    //print o/p message to the terminal
        printf("%d is negative\n", num);
    //else num is greater than 0
    else
    //print o/p message to the terminal
        printf("%d is positive\n", num);
        
    //terminate program
    return 0;
}

/* ************** EXAMPLE *****************

  Sample execution:

 Enter a number: -2
 -2 is negative

 Enter a number: 10
 10 is positive 

 *************************************** */

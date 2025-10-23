/*-------------------------------------------------------
DESCRIPTION : WAP to check whether number is even or odd
--------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare a integer variable
    int num;
    
    //print message to the user
    printf("Enter a number: ");
    //store the i/p value from the user into the variable
    scanf("%d", &num);
    
    //if reminder is zero, num is even
    if( (num%2)==0 )
        //print message to the o/p terminal
        printf("%d is even\n", num);
    //if block fails, num is odd
    else
        //print message to the o/p terminal
        printf("%d is odd\n", num);
        
    //terminate program
    return 0;

}

/* ************** EXAMPLE ******************
   Program execution sample:

  Sample Output 1:
  Enter a number: 5
  5 is odd
  Sample Output 2:
  Enter a number: 10
  10 is even

 **************************************** */

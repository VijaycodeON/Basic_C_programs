/*---------------------------------------------------------
DESCRIPTION : WAP to check whether number is b/w 50 to 100.
---------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare integer variable
    int num;
    
    //print message to the user
    printf("Enter a number: ");
    //store i/p value from the user into the variable
    scanf("%d", &num);
    
    //condition to check the given number is b/w 50 and 100
    if( (num>=50) && (num<=100) )
        //print o/p message to the terminal
        printf("%d is in range\n", num);
    //if condition fails, number is out of range
    else
        //print o/p mesage to the terminal
        printf("%d is not in range\n", num);
        
    //terminate program
    return 0;
}

/* **************** EXAMPLE ******************
 	Program execution sample:

  Sample Output 1:
  Enter a number: 60
  60 is in range

  Sample Output 2:
  Enter number: 5
  5 is not in range

  Sample Output 3:
  Enter a number: 50
  50 is in range
  
  Sample Output 4:
  Enter a number: 200
  200 is not in range

  Sample Output 5:
  Enter a number: 100
  100 is in range

******************************************** */

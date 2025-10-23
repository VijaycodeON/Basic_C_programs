/*-------------------------------------------------
DESCRIPTION : WAP to print largest of 3 integers.
--------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare integer variables
    int num1, num2, num3, largest;
    
    //print message to the user
    printf("Enter three numbers: ");
    //store i/p values from user into the variables
    scanf("%d%d%d", &num1, &num2, &num3);
    
    //initially, consider num1 is largest
    largest = num1;
    
    //if num2 is greater than num1, store num2 value in largest
    if( num2>num1 )
        largest=num2;
        
    //if num3 is greater than largest, store num3 value in largest
    if( num3>largest )
        largest=num3;
        
    //print o/p message to the terminal
    printf("Largest is %d", largest);
    
    //terminate program
    return 0;
    
}

/*-------------------------------------------------

  Instructions:

Use if else if condition to find largest of 3 integers.

Note: Declare variables int num1, num2, num3, largest;

Program execution sample:

Sample Output 1:
Enter three numbers: 1  5  10
Largest is 10

Sample Output 2:
Enter three numbers: 125  100 5
Largest is 125

Sample Output 3:
Enter three numbers: 50 200 100
Largest is 200

--------------------------------------------------*/

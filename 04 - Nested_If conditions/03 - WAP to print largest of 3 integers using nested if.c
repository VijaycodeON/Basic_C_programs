/*---------------------------------------------------------------
DESCRIPTION : WAP to print largest of 3 integers using nested if
----------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function declaration
int main()
{
    //declare variables
    int num1, num2, num3, largest;
    
    //print message to the user
    printf("Enter three numbers: ");
    //store i/p value from user into the variable
    scanf("%d%d%d",&num1, &num2, &num3);
    
    //initially consider num1 is largest
    largest = num1;
    
    //condition check if num2 is greater than num1
    if( num2>num1 )
    {
        //store value num2 in largest
        largest = num2;
        //condition check if num3 is largest
        if( num3>largest )
        {
            //store value num3 in largest
            largest = num3;
        }
    }
    //if condition fails, else block is excecuted
    else
    {
        //condition to check if num3 is greater than num1
        if( num3>num1 )
        {
        //store num3 value in largest
        largest = num3;
        }
    }
    
    //print final o/p message on the terminal 
    printf("Largest is %d", largest);
    
    //terminate program
    return 0;
}

/*---------------------------------------------------------------

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

----------------------------------------------------------------*/

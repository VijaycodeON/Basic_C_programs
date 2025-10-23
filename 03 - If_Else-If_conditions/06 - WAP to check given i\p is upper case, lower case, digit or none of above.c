/*-------------------------------------------------------------------------------------
DESCRIPTION : WAP to check given i/p is upper case, lower case, digit or none of above
-------------------------------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare variables
    char input;
    
    //print message
    printf("Enter the character : ");
    //store i/p value from the user into the variable
    scanf("%c", &input);
    
    //condition check to given i/p is a digit
    if( input>=48 && input<=57 )
        //print o/p message onto the terminal
        printf("The character is Digit\n");
    //condition check to given i/p is a upper case
    else if( input>=65 && input<=90 )
        //print o/p message onto the terminal
        printf("The character is Upper Case.\n");
    //condition check to given i/p is a lower case
    else if( input>=97 && input<=122 )
        //print o/p message onto the terminal
        printf("The character is Lower Case.\n");
    //if all condition fails, else block gets exceuted
    else
        //print o/p message onto the terminal
        printf("The character not an alphabet or digit.\n");
        
    //terminate program
    return 0;
}


/*-------------------------------------------------------------------------------------


  Sample Execution :

Test case 1 :
Enter the character : A
The character is Upper Case.

Test case 2 :
Enter the character : 5
The character is Digit.

Test case 3 :
Enter the character : !
The character not an alphabet or digit.


-------------------------------------------------------------------------------------*/

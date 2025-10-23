/*--------------------------------------------------
DESCRIPTION : WAP to print greetings based on time
---------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare integer variables
    int time;
    
    //print message to the user
    printf("Enter the hour (0-23): ");
    //store i/p values from user into the variable
    scanf("%d", &time);
    
    //condition check for invalid time
    if( time>23 )
        //print error message on the terminal
        printf("Invalid hour!");
    //condition check for time in b/w 5-11
    else if( time>=5 && time<=11 )
        //print greeting message onto the terminal
        printf("Good morning!\n");
    //condition check for time in b/w 12-15
    else if( time>=12 && time<=15 )
        //print greeting message onto the terminal
        printf("Good afternoon!\n");
    //condition check for time in b/w 16-21
    else if( time>=16 && time<=21 )
        //print greeting message onto the terminal
        printf("Good evening!\n");
    //condition check for time in b/w 22-4
    else if( time>=22 || (time>=0 && time<=4) )
        //print greeting message onto the terminal
        printf("Good night!\n");
        
    //terminate program
    return 0;
        
}

/*--------------------------------------------------

  Instructions:


The program prompts the user to enter hour (0-23).
It then reads the input number using scanf.
The program greets them based on the time using the "if-else if" statement.
Determine the corresponding greets based on the following ranges
Good morning    :  5 - 11
Good  afternoon : 12 - 15
Good evening     : 16 - 21
Good night         :  22 - 4
Invalid hour       :   greater than 23
Program execution sample:

Sample Output 1:
Enter the hour (0-23): 7
Good morning!

Sample Output 2:
Enter the hour (0-23): 15
Good afternoon!

Sample Output 3:
Enter the hour (0-23): 20
Good evening!

Sample Output 4:
Enter the hour (0-23): 30
Invalid hour!

Sample Output 5:
Enter the hour (0-23): 22
Good night!

---------------------------------------------------*/

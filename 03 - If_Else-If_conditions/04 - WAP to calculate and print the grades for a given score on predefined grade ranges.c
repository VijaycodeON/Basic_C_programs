/*------------------------------------------------------------------------------------------------
DESCRIPTION : WAP to calculate and print the grades for a given score on predefined grade ranges.
--------------------------------------------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare variable
    int score;
    
    //print message to the user
    printf("Enter the score: ");
    //store the i/p value from user in variable
    scanf("%d", &score);
    
    //if score is b/w 90-100 range
    if( score>=90 && score<=100 )
        //print o/p message to terminal
        printf("Your grade is A\n");
    //if score is b/w 80-89 range
    else if( score>=80 && score<=89 )
        //print o/p message to terminal
        printf("Your grade is B\n");
    //if score is b/w 70-79 range
    else if( score>=70 && score<=79 )
        //print o/p message to terminal
        printf("Your grade is C\n");
    //if score is b/w 60-69 range
    else if( score>=60 && score<=69 )
        //print o/p message to terminal
        printf("Your grade is D\n");
    //if score is below 60.
    else if( score<60 )
        //print o/p message to terminal
        printf("Your grade is F\n");
        
    //terminate program
    return 0;
}

/*------------------------------------------------------------------------------------------------

  Instructions:

Prompt the user to enter a numeric score.
Determine the corresponding grade based on the following ranges:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60
Display the calculated grade to the user.


Program execution sample:

Sample Output 1:
Enter the score: 95
Your grade is A

Sample Output 2:
Enter number: 35
Your grade is F

Sample Output 3:
Enter a number: 73
Your grade is C

Sample Output 4:
Enter a number: 64
Your grade is D

Sample Output 5:
Enter a number: 86
Your grade is B

--------------------------------------------------------------------------------------------------*/

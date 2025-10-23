/*-----------------------------------------------------------
DESCRIPTION : WAP to determine ticket price based on the age.
------------------------------------------------------------*/
//header inclusion
#include<stdio.h>

//main function
int main()
{
    //variables declaration
    int age;
    float price=100;
    
    //print message
    printf("Age = ");
    //take input from the user
    scanf("%d", &age);
    
    //condition for child under 5 years old
    if( age>=0 && age<4 )
    {
        //100% discount calculation
        price = 0*100;
        //print message on the output
        printf("Children under 5 years old get in free!\n");
    }
    //condition for child above 8 years old
    else if( age>=5 && age<=12 )
    {
        //50% discount calculation
        price = 0.5*100;
    }
    //condition for senior adults above age 65
     else if( age>=65 )
    {
        //20% discount calculation
        price = 0.8*100;
    }
    
    //print the final price calculation on the output 
    printf("Ticket price: Rs. %0.2f", price);
    
    return 0;

}

/*------------------------------------------------------

  Instructions:

Prompt the user to enter their age.
Based on the age provided, calculate the ticket price using the following rules:
Children under 5 years old can enter for free.
Children aged 5 to 12 receive a 50% discount on the regular ticket price.
Seniors aged 65 and above receive a 20% discount on the regular ticket price.
For all other age groups, the regular ticket price applies.
Display the calculated ticket price to the user.
Sample Executions:

Scenario: Child Under 5 Years Old

Input: Age = 3
Output:
Children under 5 years old get in free!
Ticket price: Rs. 0.00
Scenario: Child Aged 8

Input: Age = 8
Output: Ticket price: Rs. 50.00
Scenario: Senior Aged 70

Input: Age = 70
Output: Ticket price: Rs. 80.00
Scenario: Adult Aged 25

Input: Age = 25
Output: Ticket price: Rs. 100.00

-------------------------------------------------------*/

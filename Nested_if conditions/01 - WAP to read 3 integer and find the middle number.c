/*-------------------------------------------------------------
DESCRIPTION : WAP to read 3 integer and find the middle number
--------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//******************* USING NESTED IF ONLY ****************************//

//main function
int main()
{
    //declare 3 variables
    int num1, num2, num3;
    
    //prompt message to the user
    //printf("Enter the Three numbers : ");
    //store i/p values from the user
    scanf("%d%d%d", &num1, &num2, &num3 );
    
    //condition check for num1 in middle
    if( num1 > num2 )
    {
        //condition check for num1 in middle
        if( num1 < num3 )
        {
            //print o/p message for i/p eg --> 200 100 300
            printf("The middle number is %d\n", num1);
        }
        else
        {
            //condition check for num3 in middle
            if( num3 < num1 )
            {
                //condition check for num3 in middle
                if( num3 > num2 )
                {
                    //print o/p message for i/p eg --> 300 100 200
                    printf("The middle number is %d\n", num3 );
                }
                else
                {
                    //print o/p message for i/p eg --> 300 200 100
                    printf("The middle number is %d\n", num2 );
                }
            }
        }
    }
    else
    {
        //condition check for num1 in middle
        if( num2 > num1 )
        {
            //condition check for mun1 in middle
            if( num3 < num1 )
            {
                //print o/p message for i/p eg --> 200 300 100
                printf("The middle number is %d\n", num1 );
            }
            else
            {
                //condition check for num3 in middle
                if( num3 > num1 )
                {
                    //condition check for num3 in middle
                    if( num3 < num2 )
                    {
                        //print o/p message for i/p eg --> 100 300 200
                        printf("The middle number is %d\n", num3);
                    }
                    else
                    {
                        //print o/p message for i/p eg --> 100 200 300
                        printf("The middle number is %d\n", num2);
                    }
                }
            }
        }
    }
    
    //terminate program
    return 0;
}

//*********************** USING LOGICAL OPERATORS *****************************//


/*
//main function
int main()
{
    //declare functions
    int num1, num2, num3;
    
    //print message to the user
    printf("Enter the Three numbers : ");
    //store i/p from the user onto the variable
    scanf("%d%d%d", &num1, &num2, &num3);
    
    //condition to check num1 is the middle number
    if( (num1>num2)&&(num1<num3) || (num1>num3)&&(num1<num2) )
        //print o/p message on to the terminal 
        printf("The middle number is %d\n", num1);
    //condition to check num2 is the middle number
    else if( (num2>num1)&&(num2<num3) || (num2>num3)&&(num2<num1) )
        //print o/p message on to the terminal 
        printf("The middle number is %d\n", num2);
    //condition to check num1 is the middle number
    else if( (num3>num1)&&(num3<num2) || (num3>num2)&&(num3<num1) )
        //print o/p message on to the terminal 
        printf("The middle number is %d\n", num3);
    //else
        //print o/p message onto the terminal
        //printf("invalid input - give 3 different inputs");
    
    //terminate program
    return 0;
    
}
*/

/*-------------------------------------------------------------
  
  Sample Execution :

Test case 1 :
Enter the Three numbers : 10 20 30
The middle number is 20

Test case 2 :
Enter the Three numbers : 43 10 25
The middle number is 25

--------------------------------------------------------------*/


























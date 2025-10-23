/*--------------------------------------------------------------------------
DESCRIPTION : WAP to convert fahrenheit (int value) to celcius (float value).
---------------------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare variable one in integer and one in float
    int fahrenheit;
    float celcius;
    
    //print message to the user
    printf("Enter the fahrenheit in interger value : ");
    //store i/p value from the user into the variable
    scanf("%d", &fahrenheit);
    
    //type cast int variable to float (fahrenheit), type cast 32(double) to float, type cast 9(integer) to float and perfrom calculation.
    celcius = ((float)fahrenheit-(float)32)*(5/(float)9);
    
    //print value in float in the o/p terminal;
    printf("%f\n", celcius);
    
    //program termination
    return 0;
}


/* ******************* EXAMPLE ***********************
   Sample execution:

   Enter the fahrenheit in interger value : 90.6
   32.222225

**************************************************** */

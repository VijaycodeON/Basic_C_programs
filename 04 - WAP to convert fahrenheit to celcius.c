/*----------------------------------------------------------------
DESCRIPTION : WAP to convert temperature in fahrenheit to celsius.
----------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //declare variables to store fahrenheit & celsius
    float fahrenheit, celsius;
    
    //print message to the user
    printf("Enter the fahrenheit value :");
    //store i/p value from the user
    scanf("%f", &fahrenheit);
    
    //type cast values to float values and perform calculation, answer stored in celsius variable.
    celsius = (fahrenheit-(float)32 )*(5/(float)9);
    
    //Converted answer is printed on the o/p terminal.
    printf("%f\n", celsius);
    
    //program termination
    return 0;
}

/* ****************** EXAMPLE **********************

 sample execution:

Enter the fahrenheit value :200
93.333336

***************************************************/

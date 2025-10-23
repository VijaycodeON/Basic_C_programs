/*---------------------------------------------------------------------------
DESCRIPTION : WAP to calculate simple intrest for the given principal amount.
----------------------------------------------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //decalre variables
    float simple_intrest, principal, intrest, Time;
    
    //print message to the user
    printf("Enter the principal amount, rate of intrest and time : ");
    //stores i/p values from the user into the variables respectively
    scanf("%f%f%f", &principal, &intrest, &Time);
    
    simple_intrest = ( principal*intrest*Time ) / 100;
    
    //print simple intrest value in the o/p screen
    printf("%g\n",simple_intrest);
    
    //terminate program
    return 0;
}


/* ****************** EXAMPLE *****************
   
   Sample execution:
   
   Enter the principal amount, rate of intrest and time : 1156 4 6
   277.44

******************************************** */

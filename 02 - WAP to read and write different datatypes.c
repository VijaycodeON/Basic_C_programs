/*---------------------------------------
DESPRICTIONS : Read and print basic types
-----------------------------------------*/

//header file inclusion
#include<stdio.h>

//main function
int main()
{
    //different datatypes variable decalaration
    char name_letter;
    int pincode;
    float height;
    double latitude, longitude;
    
    //print message and store i/p character value from user in the variable 
    //printf("Enter first letter of your name: ");
    scanf("%c", &name_letter);
    //print message and store i/p integer value from user in the variable 
    //printf("Enter your Pinconde: ");
    scanf("%d", &pincode);
    //print message and store i/p float value from user in the variable 
    //printf("Enter your height in feet: ");
    scanf("%f", &height);
    //print message and store i/p double values from user in the variable 
    //printf("Enter latitude & longitude of your address: ");
    scanf("%lf%lf", &latitude, &longitude);
    
    //The below lines print the message on the output terminal
    printf("Here is what you have entered:\n");
    printf("First Letter in name: %c\n", name_letter);
    printf("Pincode: %d\n", pincode);
    printf("Height: %f\n", height);
    printf("Location: %lf %lf\n", latitude, longitude);
    
    return 0;
    
    
}

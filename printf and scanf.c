#include<stdio.h>


int main()
{
char name_letter;
int pincode;
float height;
double latitude, longitude;
 
    printf("Enter first letter of your name: ");
       
    scanf("%c",&name_letter);

    printf("Enter your Pincode: ");
    scanf("%d", &pincode);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter latitude & longitude of your address: ");
    scanf("%lf%lf", &latitude, &longitude);

    printf("Here is what you have entered:\n");
    printf("First Letter in Name: %c\n", name_letter);
    printf("Pincode: %d\n", pincode);
    printf("height: %0.2f\n", height);
    printf("Location: %0.2lf %0.2lf\n", latitude, longitude);
    return 0;
}

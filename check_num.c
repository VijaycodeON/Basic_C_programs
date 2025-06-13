/*----------------------------------
NAME        : Vijay M
DATE        : 13/06/2025
DESCRIPTION : Check given number is positive negative or zero.
 ----------------------------------*/
 //header inclusion
 #include<stdio.h>
 
 //main function 
 int main()
 {
     //decalared integer variable
     int num;
     
     //print message on o/p screen
     printf("Enter a number: ");
     //take i/p value from the user
     scanf("%d", &num);
     
    //compare variable value greater than 0
    if( num>0 )
        printf("The number is positive\n");
    //compare variable value lesser than 0
    else if( num<0 )
        printf("The number is negative\n");
    //compare variable value equal to 0
    else
        printf("the number is zero\n");
    return 0;
 }

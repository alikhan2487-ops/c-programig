/*
NAME:ALI AZMATULLAH KHAN
UIN:251M011
CLASS:F.E MECHANICAL
DIV:F
*/
#include <stdio.h>

int main()
{
    int num1,num2;
    int choice ;
    
    printf("Enter first number:");
    scanf("%d", &num1);
    
    printf("Enter second number:");
    scanf("%d", &num2);
    
    printf("1.Multiplication\n2.Division\n3.Addition\n4.Subtraction\n5.exit");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1 :
        printf ("Multiplication is %d",num1*num2);
        break;
        
        case 2 :
        printf ("division is %d",num1/num2);
        
        case 3 :
        printf ("Addition is %d",num1+num2);
        break;
        
        case 4 :
        printf ("Subtraction is %d",num1-num2);
        
        case 5 :
        break;
        
        default :
        printf ("Invalid choice");
        
        
    }
    return 0;
}
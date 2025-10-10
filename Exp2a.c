/*
NAME:ALI AZMATULLAH KHAN 
UIN:251M011
CLASS;F.E MECHANICL
DIV:F 
*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("\nEnter an integer=");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an odd number\n",num);
    }
    else
    {
    printf("%d is an even number\n",num);
    }
    return 0;
}
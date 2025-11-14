/*
NAME:ALI AZMATULLAH KHAN
UIN:251M011
CLASS:F.E MECHANICAL
DIV:F
*/
#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter the number of element:");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("the largest element is: %d", largest);
    
    return 0;
}       
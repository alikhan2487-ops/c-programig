/*
NAME:ALI AZMATULLAH KHAN
UIN:251M011
CLASS:F.E MECHANICAL
DIV:F
*/
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    p = &arr[n - 1];

    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *p);
        p--;  
    }

    return 0;
}
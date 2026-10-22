#include<stdio.h>
int main() {
    int a[10], x, pos, n;

    printf("How many numbers: ");
    scanf("%d", &x);

    printf("Enter the numbers:\n");
    for (int i = 0; i < x; i++) { // Use 0-based indexing
        scanf("%d", &a[i]);
    }

    printf("The array is:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", a[i]);
    }

        printf("\nDelection operation in array\n");
        printf("Enter the number and the position :\n");
        scanf("%d %d", &n, &pos);

        for (int i = pos; i <x-1; i++) { // Shift elements to the right
            a[i] = a[i+1];
        }
        
        x=x-1; 
        
        printf("The array after delection is:\n");
        for (int i = 0; i < x; i++) {
            printf("%d ", a[i]);
        }
    
    

    return 0;
}
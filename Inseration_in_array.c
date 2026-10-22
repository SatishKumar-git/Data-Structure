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

    printf("\nInsertion operation in array\n");
    if (x == 10) {
        printf("Overflow\n");
    } else {
        printf("Enter the number and the position :\n");
        scanf("%d %d", &n, &pos);

        for (int i = x; i > pos; i--) { // Shift elements to the right
            a[i] = a[i-1];
        }
        a[pos] = n; // Insert the new element at the specified position
        x=x+1; // Increment the size of the array

        printf("The array after insertion is:\n");
        for (int i = 0; i < x; i++) {
            printf("%d ", a[i]);
        }
    
    }

    return 0;
}
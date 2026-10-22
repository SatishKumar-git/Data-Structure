#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];  // Declare an array with 'n' elements
    int sum = 0;   // Variable to store the sum

    // Ask user to input the array elements
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Loop through the array and calculate the sum
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}

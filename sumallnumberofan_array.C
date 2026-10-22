
#include <stdio.h>
int main() {
    int n, sum = 0;
    
    printf("Enter the number of elements in the array: ");
    for(int i = 0; i <5; i++) {
    scanf("%d", &n);
    }
    for(int i = 0; i < 5; i++) {

        sum=sum+n;
    }
    
    printf("Sum of all numbers in the array: %d\n", sum);
    
    return 0;
}
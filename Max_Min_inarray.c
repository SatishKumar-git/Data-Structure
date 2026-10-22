#include <stdio.h>

int main() {
    int a[7];

    printf("Enter the 7 numbers:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0]; 

    for (int i = 1; i < 7; i++) {
        if (a[i] > max) {
            max = a[i]; 
        }
    }

    printf("The max number is %d\n", max);

    return 0;
}
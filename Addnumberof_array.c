#include <stdio.h>

int main() {
    int i, x, SPY = 0;
    int a[5];

    printf("Enter the 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be searched:\n");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
        if (a[i] == x) {
            printf("Number found at index %d\n", i);
            SPY++;
        }
    }

    if (SPY == 0) {
        printf("Number is not present\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i,n;
    int a[5];

    printf("Enter the 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Numbers at even index are: ");
    for(i=0; i<5; i++)
    {
        if(i%2==0)
        {
            printf("%d ", a[i]);
        }
        
    }
}
#include<stdio.h>

int main() {
    int a[5],spy=0,x;

    printf("Enter the 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &x);
    for(int i=0; i<5; i++)
    {
        if(a[i]==x)
        {
            printf("The number present at index %d", i+1);
            spy++;
        
        }
    }
    if(spy==0)
    {
        printf("The number is not present in the array");
    }
    return 0;
}

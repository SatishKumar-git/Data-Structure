#include<stdio.h>
int main()
{
    int a[7];
    printf("Enter 7 elements: ");
    for(int i=0; i<7; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements are: ");
    for(int i=0; i<7; i++)
    {
        printf("%d ", a[i]);
    }
}
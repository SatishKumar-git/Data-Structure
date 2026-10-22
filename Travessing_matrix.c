#include<stdio.h>
int main()
{
    int a[5][4],i,j;
    printf("Enter the elements of the array:\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The elements are:\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf(" \n");  
    }  
    return 0;
}
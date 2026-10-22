#include<stdio.h>
int main()
{
    int a[4][4],i,j,sum=0;
    printf("Enter the elements of the array:\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i<j) //for upper triangular matrix use i>j, for lower triangular matrix use i<j
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
        printf(" \n");
    }
        printf("The sum of the diagonal elements is: %d",sum); 
     
    return 0;
}